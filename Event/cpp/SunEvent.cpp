#include "../header/SunEvent.h"

void SunEvent::update() {
    std::cout<<"You lost the water. You have "<<this->player->getWater() - 1<<" water.\n";
    this->player->setWater(this->player->getWater() - 1);

}
