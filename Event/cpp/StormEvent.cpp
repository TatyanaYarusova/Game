#include "../header/StormEvent.h"

void StormEvent::update() {
    this->map->getCell(2,3).setPassability(false);
    this->notify_log(LogMessage{"Cell[2][3] was locked!", Level::Game});
}
