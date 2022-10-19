#ifndef GAME_DRAWEVENT_H
#define GAME_DRAWEVENT_H

#include <SFML/Graphics.hpp>


class DrawEvent{
private:
    const int cell_texture_size = 100;
    const int cell_size = 100;

    sf::Texture* texture_cell;

    sf::RectangleShape cell;
    sf::Sprite sprite_cell;
public:
    //sf::Sprite drawStorm(int, int);
    sf::Sprite drawSun(int, int);
    sf::Sprite drawWell(int, int);
    sf::Sprite drawPlatform(int, int);
    sf::Sprite drawPart(int, int);


};


#endif //GAME_DRAWEVENT_H