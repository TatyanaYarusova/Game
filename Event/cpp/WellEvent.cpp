#include "../header/WellEvent.h"

void WellEvent::update() {
    std::cout<<this->player->getWater()<<"\n";
    this->player->setWater(this->player->getWater() + 1);
}
