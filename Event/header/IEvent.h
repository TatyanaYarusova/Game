#ifndef GAME_IEVENT_H
#define GAME_IEVENT_H

#include <SFML/Graphics.hpp>
#include <iostream>
#include "../../Point.h"




class IEvent {
public:
    virtual void update() = 0;
};


#endif //GAME_IEVENT_H