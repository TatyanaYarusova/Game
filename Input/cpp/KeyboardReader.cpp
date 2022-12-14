#include "../header/KeyboardReader.h"
#include <SFML/Graphics.hpp>

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
        if(keyboardCommand == this->commands["Save"]){
            message.command = InputCommand::Save;
        }
        if(keyboardCommand == this->commands["Load"]){
            message.command = InputCommand::Load;
        }

        mediator->onCommandProcessed(message);
    }

}

KeyboardReader::KeyboardReader(InputMediator* mediator): mediator(mediator) {}


