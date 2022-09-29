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
            break;
    }

    this->count_part = 0;
}

