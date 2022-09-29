#include "../header/KeyboardReader.h"
#include <SFML/Graphics.hpp>


void KeyboardReader::process(sf::Event event) {
    if(event.type == sf::Event::KeyReleased) {
        InputMessage message{};
        switch (event.key.code) {
            case sf::Keyboard::Left:
            case sf::Keyboard::A:
                message.command = InputCommand::MoveLeft;
//                map.moveLeft();
//                player.move(map.getPlayerPosX(), map.getPlayerPosY());
//                player.getPlayer()->setTextureRect(sf::IntRect(0, 120, 100, 100));
                break;
            case sf::Keyboard::Right:
            case sf::Keyboard::D:
                message.command = InputCommand::MoveRight;
//                map.moveRight();
//                player.move(map.getPlayerPosX(), map.getPlayerPosY());
//                player.getPlayer()->setTextureRect(sf::IntRect(0, 205, 100, 100));
                break;
            case sf::Keyboard::Up:
            case sf::Keyboard::W:
                message.command = InputCommand::MoveUp;
//                map.moveUp();
//                player.move(map.getPlayerPosX(), map.getPlayerPosY());
//                player.getPlayer()->setTextureRect(sf::IntRect(0, 300, 100, 100));
                break;
            case sf::Keyboard::Down:
            case sf::Keyboard::S:
                message.command = InputCommand::MoveDown;
//                map.moveDown();
//                player.getPlayer()->setTextureRect(sf::IntRect(0, 5, 100, 100));
//                player.move(map.getPlayerPosX(), map.getPlayerPosY());
            default:
                break;
        }
        mediator->onCommandProcessed(message);
    }

}

KeyboardReader::KeyboardReader(InputMediator* mediator): mediator(mediator) {}
