#include "../header/WellEvent.h"

void WellEvent::update() {
    if(this->player->getWater() < 5) {
        this->player->setWater(this->player->getWater() + 1);
    }
}
