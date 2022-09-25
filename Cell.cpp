//
// Created by tatyana on 17.09.22.
//

#include "Cell.h"

Cell::Cell(int x, int y, bool pos, int count):x(x), y(y), is_passability(pos), count_sand(count){
    this->draw_cell.setSize(sf::Vector2f(100, 100));
    this->draw_cell.setFillColor(sf::Color::Green);// поменять цвет
    this->draw_cell.setOutlineThickness(5);
    this->draw_cell.setOutlineColor(sf::Color::Black);
    this->draw_cell.setPosition(this->x, this->y);

    this->Filename = "/home/tatyana/oop/game/map_2.png";
}

sf::RectangleShape Cell::getCell() {
    return draw_cell;
}
void Cell::setPossability(bool pos) {
    this->is_passability = pos;
    this->image.loadFromFile(Filename);
    this->texture = new sf::Texture;
    this->texture->loadFromImage(this->image);
    this->map.setTexture(*this->texture);
    this->map.setTextureRect(sf::IntRect(0, 0, 100, 100));
    this->map.setPosition(this->x, this->y);
    //this->draw_cell.setFillColor(sf::Color::Red);
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
void Cell::Color_update() {
    this->draw_cell.setFillColor(sf::Color::Yellow);
}
void Cell::Color_update_2() {
    this->draw_cell.setFillColor(sf::Color::Green);
}

sf::Sprite Cell::getSprite() {
    return map;
}


