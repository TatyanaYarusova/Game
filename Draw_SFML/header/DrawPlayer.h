#ifndef GAME_DRAWPLAYER_H
#define GAME_DRAWPLAYER_H


#include <SFML/Graphics/Sprite.hpp>
#include "../../Game_Logic/header/Field.h"

class DrawPlayer  {
private:
    sf::Sprite* herosprite;
public:
    DrawPlayer();
    sf::Sprite* getSprite(int, int);

};


#endif //GAME_DRAWPLAYER_H