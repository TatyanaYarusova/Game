#include "../header/PlatfotmEvent.h"

void PlatformEvent::update() {
    if(player->getCountPart() >= 1){
        this->notify();
    }
    else{
        std::cout<<"You have "<<player->getCountPart()<<" part. You should found >= 1 part!\n";
    }
}
