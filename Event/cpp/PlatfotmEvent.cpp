#include "../header/PlatfotmEvent.h"

void PlatformEvent::update() {
    if(player->getCountPart() >= 1){
        this->notify();
    }
    else{
        this->notify_logger(Message::Platforma, 0);
        //std::cout<<"You have "<<player->getCountPart()<<" part. You should found >= 1 part!\n";
    }
}
