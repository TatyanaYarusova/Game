#include "../header/PartEvent.h"

void PartEvent::update() {
     this->player->setCountPart();
     this->notify_logger(Message::Part, this->player->getCountPart());
//     std::cout<<"You have "<<this->player->getCountPart()<<" part."<<"\n";
//     std::cout<<"You have "<<this->player->getWater()<<" water."<<"\n";

}
