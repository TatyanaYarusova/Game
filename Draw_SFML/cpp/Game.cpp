#include "../header/Game.h"
#include "../../Input/header/Reader.h"
#include "../../Input/header/KeyboardReader.h"
#include "../header/DrawField.h"
#include "../../Input/header/PlayerController.h"
#include "../../Input/header/GameController.h"
#include "../../Event/header/StormEvent.h"
#include "../../Event/header/SunEvent.h"
#include "../../Event/header/WellEvent.h"
#include "../../Event/header/PartEvent.h"
#include "../../Event/header/PlatfotmEvent.h"
#include <SFML/Graphics.hpp>

void Game::start() {
    //create mediator
    InputMediator mediator;
    KeyboardReader keyboardReader{&mediator};
    Reader reader{&mediator};

    // create GameController and add it in mediator
    GameController gameController;
    mediator.addController(&gameController);

    //reading
    reader.read();

    //create Field and create Player
    Field map(gameController.getWidth(), gameController.getHeight());
    Player player(gameController.getRole());

    //create playerController and add it in mediator
    PlayerController playerController{&map, &player};
    mediator.addController(&playerController);

    //create drawField
    DrawField draw_map;

    //create event
    auto* storm = new StormEvent(&map, &playerController);
    auto* sun = new SunEvent(&player);
    auto* well = new WellEvent(&player);
    auto* part = new PartEvent(&player);
    auto* platform = new PlatformEvent(&player);
    map.getCell(3,2).setEvent(sun);
    map.getCell(3, 3).setEvent(well);
    map.getCell(4,5).setEvent(part);
    map.getCell(1,6).setEvent(platform);
    map.getCell(1,0).setEvent(storm);

    sf::RenderWindow window(sf::VideoMode(1000, 1000), "Game");

    while (window.isOpen()) {
        sf::Event event{};
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        // drawing map
        draw_map.draw(map, window);

        window.display();
        //reading keyboard-event
        keyboardReader.process(event);
    }

}
