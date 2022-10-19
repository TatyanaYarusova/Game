#include "../header/PartEvent.h"

void PartEvent::update() {
     this->player->setCountPart();
     std::cout<<"You have "<<this->player->getCountPart()<<" part."<<"\n";
     std::cout<<"You have "<<this->player->getWater()<<" water."<<"\n";

}
