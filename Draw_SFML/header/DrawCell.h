#ifndef UNTITLED_DRAWCELL_H
#define UNTITLED_DRAWCELL_H

#include <SFML/Graphics.hpp>

class DrawCell {
private:
    const int cell_texture_size = 100;
    const int cell_size = 100;

    sf::Texture* texture_cell;

    sf::RectangleShape cell;
    sf::Sprite sprite_cell;
public:
    DrawCell();
    sf::RectangleShape draw(int x, int y, bool player = false);
    sf::Sprite drawClose(int x, int y);
};


#endif //UNTITLED_DRAWCELL_H