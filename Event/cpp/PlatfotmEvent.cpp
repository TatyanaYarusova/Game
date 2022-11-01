#include "../header/PlatfotmEvent.h"

void PlatformEvent::update() {
    if(player->getCountPart() >= 1){
        this->notify();
    }
    else{
        this->notify_log(LogMessage{"You haven't some part! You need found 1 part. ", Level::Game});
    }
}
