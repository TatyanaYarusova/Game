#include "../header/StormEvent.h"

void StormEvent::update() {
    int x = rand() % map->getWidth();
    int y = rand() % map->getWidth();
    while(this->map->getCell(x, y).getPassability() != true or this->map->getCell(x, y).getEvent()!= nullptr){
        x = rand() % map->getWidth();
        y = rand() % map->getWidth();
    }
    this->map->getCell(x,y).setPassability(false);
    this->notify_log(LogMessage{"Cell was locked!", Level::Game});
}
