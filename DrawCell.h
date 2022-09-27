//
// Created by tatyana on 18.09.22.
//

#ifndef UNTITLED_DRAWCELL_H
#define UNTITLED_DRAWCELL_H
#include <SFML/Graphics.hpp>


class DrawCell {
private:
    sf::RectangleShape cell;
    std::string Filename;
    sf::Image image_cell;
    sf::Texture* texture_cell;
    sf::Sprite sprite_cell ;
public:
    sf::RectangleShape draw(int, int);
    void draw_close(int, int);
    void update_1();
    void update_2();
    sf::Sprite getSpriteDraw();
};


#endif //UNTITLED_DRAWCELL_H
