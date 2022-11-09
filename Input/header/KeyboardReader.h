#ifndef UNTITLED_PLAY_H
#define UNTITLED_PLAY_H

#include <SFML/Graphics.hpp>
#include "InputMediator.h"
typedef std::map<std::string, sf::Keyboard::Key> Map;


class KeyboardReader {
private:
    InputMediator* mediator;
    sf::Keyboard::Key keyboardCommand;
    Map commands;
public:
    explicit KeyboardReader(InputMediator* mediator);
    void process(sf::Event event);
    void setCommands(Map commands);
};


#endif //UNTITLED_PLAY_H
