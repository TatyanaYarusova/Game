#include "../header/StormEvent.h"

void StormEvent::update() {
    this->map->getCell(2,3).setPassability(false);
}
