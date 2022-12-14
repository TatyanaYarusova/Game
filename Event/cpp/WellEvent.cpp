#include "../header/WellEvent.h"

void WellEvent::update() {
    if(this->player->getWater() < 5) {
        this->player->setWater(this->player->getWater() + 1);
        std::cout<<"You found the water. You have "<<this->player->getWater()<<" water.\n";
    }
    else {
        std::cout << "You have max count water.\n";
    }
}
