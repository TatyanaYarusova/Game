#include "../header/SunEvent.h"

void SunEvent::update() {
    this->player->setWater(this->player->getWater() - 1);
}
