#include "../header/StormEvent.h"

void StormEvent::update() {
    this->map->getCell(2,3).setPassability(false);
    InputMessage message;
    message.command = InputCommand::MoveDown;
    this->controller->getProcess(message);
}
