//
// Created by tatyana on 17.09.22.
//

#include "Cell.h"

Cell::Cell(int x, int y, bool pos, int count):x(x), y(y), is_passability(pos), count_sand(count){}

sf::RectangleShape Cell::getCell() {
    return this->drawer.draw(this->x, this->y);
}
void Cell::setPossability(bool pos) {
    this->is_passability = pos;
    drawer.draw_close(this->x, this->y);
}

bool Cell::getPossability() {
    return this->is_passability;
}

int Cell::getCountSand() {
    return this->count_sand;
}

void Cell::setCountSand() {
    this->count_sand++;
}

sf::Sprite Cell::getSprite() {
    return drawer.getSpriteDraw();
}

void Cell::Color_update() {
    drawer.update_1();
}
void Cell::Color_update_2() {
    drawer.update_2();
}


