#include "../header/WellEvent.h"

void WellEvent::update() {
    this->player->setWater(this->player->getWater() + 1);
    std::cout<<"You have "<<this->player->getCountPart()<<" part."<<"\n";
    std::cout<<"You have "<<this->player->getWater()<<" water."<<"\n";
}