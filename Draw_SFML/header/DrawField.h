#ifndef UNTITLED_DRAWFIELD_H
#define UNTITLED_DRAWFIELD_H

#include <SFML/Graphics/RenderWindow.hpp>
#include "DrawCell.h"
#include "../../Game_Logic/header/Field.h"

class DrawField {
private:
    DrawCell drawCell;
public:
    void draw(Field& map, sf::RenderWindow& window);
};


#endif //UNTITLED_DRAWFIELD_H
