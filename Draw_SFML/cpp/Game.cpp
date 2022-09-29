#include "../header/Game.h"
#include "../../Input/header/Reader.h"
#include "../../Input/header/KeyboardReader.h"
#include "../header/DrawField.h"
#include "../../Input/header/PlayerController.h"
#include "../../Input/header/GameController.h"
#include <SFML/Graphics.hpp>

void Game::start() {
    InputMediator mediator;
    KeyboardReader keyboardReader{&mediator};
    Reader reader{&mediator};
    GameController gameController;
    mediator.addController(&gameController);

    reader.read();

    Field map(gameController.getWidth(), gameController.getHeight());
    Player player(gameController.getRole());

    PlayerController playerController{&map};
    mediator.addController(&playerController);

    DrawField draw_map;

    sf::RenderWindow window(sf::VideoMode(1000, 1000), "Game");

    while (window.isOpen()) {
        sf::Event event{};
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();

        draw_map.draw(map, window);

        window.display();

        keyboardReader.process(event);
    }

}
