//
// Created by tatyana on 20.09.22.
//

#ifndef UNTITLED_PLAY_H
#define UNTITLED_PLAY_H
#include <SFML/Graphics.hpp>
#include "Player.h"
#include "Field.h"

class Play {

public:
    void play(sf::Event event, Field& map, Player& player);

};


#endif //UNTITLED_PLAY_H
