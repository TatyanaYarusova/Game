#include <iostream>
#include "../header/Player.h"


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
            this->water = 2;
            break;
    }

    this->count_part = 0;
}

void Player::setCountPart() {
    this->count_part++;
    std::cout<<"You found the part. You have "<<count_part<<" part.\n";
}

int Player::getCountPart() {
    return this->count_part;
}

void Player::setWater(int water) {
    this->water = water;
    this->notify();
}

int Player::getWater() {
    return this->water;
}

void Player::setCountPart(int new_count_part) {
    count_part = new_count_part;
}

