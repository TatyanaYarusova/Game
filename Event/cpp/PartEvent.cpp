#include "../header/PartEvent.h"

void PartEvent::update() {
     this->player->setCountPart();
     this->notify_log(LogMessage{"Part: ", Level::Game, this->player->getCountPart()});
}
