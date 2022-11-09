#include "../header/KeyboardReader.h"
#include <SFML/Graphics.hpp>
#include <iostream>

void KeyboardReader::setCommands(Map commands) {
    this->commands = commands;
}

void KeyboardReader::process(sf::Event event) {
    if(event.type == sf::Event::KeyReleased) {
        InputMessage message{};
        message.command = InputCommand::Stop;
        keyboardCommand = event.key.code;
        if(keyboardCommand == this->commands["Left"]){
            message.command = InputCommand::MoveLeft;
        }
        if(keyboardCommand == this->commands["Right"]){
            message.command = InputCommand::MoveRight;
        }
        if(keyboardCommand == this->commands["Up"]){
            message.command = InputCommand::MoveUp;
        }
        if(keyboardCommand == this->commands["Down"]){
            message.command = InputCommand::MoveDown;
        }
//        switch (event.key.code) {
//            case sf::Keyboard::Left:
//            case this->commands.at("Left"):
//                message.command = InputCommand::MoveLeft;
//                break;
//
//            case sf::Keyboard::Right:
//            case sf::Keyboard::D:
//                message.command = InputCommand::MoveRight;
//                break;
//
//            case sf::Keyboard::Up:
//            case sf::Keyboard::W:
//                message.command = InputCommand::MoveUp;
//                break;
//
//            case sf::Keyboard::Down:
//            case sf::Keyboard::S:
//                message.command = InputCommand::MoveDown;
//                break;
//
//            default:
//                break;
//        }
        mediator->onCommandProcessed(message);
    }

}

KeyboardReader::KeyboardReader(InputMediator* mediator): mediator(mediator) {}


