//
// Created by tatyana on 18.09.22.
//

#include "DrawCell.h"


sf::RectangleShape DrawCell::draw(int x, int y) {
    this->cell.setSize(sf::Vector2f(100, 100));
    this->cell.setFillColor(sf::Color::Green);// поменять цвет
    this->cell.setOutlineThickness(5);
    this->cell.setOutlineColor(sf::Color::Black);
    this->cell.setPosition(x, y);
    return  cell;
}


void DrawCell::draw_close(int x, int y) {
    this->Filename = "/home/tatyana/oop/game/map_2.png";
    this->image_cell.loadFromFile(Filename);
    this->texture_cell = new sf::Texture;
    this->texture_cell->loadFromImage(this->image_cell);
    this->sprite_cell.setTexture(*this->texture_cell);
    this->sprite_cell.setTextureRect(sf::IntRect(0, 0, 100, 100));
    this->sprite_cell.setPosition(x, y);

}

void DrawCell::update_2() {
    this->cell.setFillColor(sf::Color::Blue);

}

void DrawCell::update_1() {
    this->cell.setFillColor(sf::Color::Yellow);
}
sf::Sprite DrawCell::getSpriteDraw(){
    return this->sprite_cell;
}

