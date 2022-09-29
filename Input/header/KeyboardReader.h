#ifndef UNTITLED_PLAY_H
#define UNTITLED_PLAY_H

#include <SFML/Graphics.hpp>
#include "InputMediator.h"

class KeyboardReader {
private:
    InputMediator* mediator;

public:
    explicit KeyboardReader(InputMediator* mediator);
    void process(sf::Event event);
};


#endif //UNTITLED_PLAY_H
