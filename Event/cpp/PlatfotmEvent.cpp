#include "../header/PlatfotmEvent.h"

void PlatformEvent::update() {
    if(this->player->getCountPart() >=1 ){// пока 1, но долюно быть 4
        std::cout<<"You are win!!!";
        exit(0);
    }
}
