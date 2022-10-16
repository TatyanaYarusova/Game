#include "../header/SunEvent.h"

void SunEvent::update() {
    this->player->setWater(this->player->getWater() - 1);

    if(player->getWater() == 0){
        std::cout<<"Game over!";
        exit(0);
    }
}
