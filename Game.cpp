#include "Game.h"
#include "Player.h"
#include "Field.h"
#include "Reader.h"
#include "Play.h"
#include "DrawField.h"
#include <SFML/Graphics.hpp>

void Game::start() {
    Reader reader{};
    reader.read();

    Play play;
    Field map(reader.getHeight(), reader.getHeight());
    Player player(reader.getRole());
    DrawField draw_map;

    sf::RenderWindow window(sf::VideoMode(800, 800), "Game");

    while (window.isOpen()) {
        sf::Event event{};
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();

        draw_map.draw(map, window);

        window.draw(*player.getPlayer());
        window.display();

        play.play(event, map, player);
    }

}
