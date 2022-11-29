#include "../header/PlatfotmEvent.h"

void PlatformEvent::update() {
    if(player->getCountPart() >= count){
        this->notify();
    }
    else{
        this->notify_log(LogMessage{"You haven't some part! You need found more part. ", Level::Game});
    }
}

void PlatformEvent::setCount(int count) {
    this->count = count;
}
