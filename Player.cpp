//
// Created by tatyana on 17.09.22.
//

#include "Player.h"


Player::Player(int name):role(name) {
    switch (role) {
        case 1:
            this->water = 4;
            break;
        case 2:
            this->water = 4;
            break;
        case 3:
            this->water = 5;
            break;
        default:
            break;
    }
    this->x = 0;
    this->y = 0;
    this->height = 100;
    this->width = 100;
    this->count_part = 0;

    this->Filename = "/home/tatyana/oop/game/hero.png";
    this->heroim.loadFromFile(Filename);
    this->herotex.loadFromImage(this->heroim);
    this->herosprite = new sf::Sprite;
    this->herosprite->setTexture(this->herotex);
    this->herosprite->setTextureRect(sf::IntRect(0, 5, this->height, this->width));
    this->herosprite->setPosition(this->x, this->y);
}
sf:: Sprite* Player::getPlayer(){
    return herosprite;
}

void Player::move(int x, int y){
    this->x = x * 100;
    this->y = y * 100;
    herosprite->setPosition(this->x, this->y);
}

