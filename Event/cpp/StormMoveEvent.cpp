#include "../header/StormMoveEvent.h"

void StormMoveEvent::update() {
    InputMessage message;
    message.command = InputCommand::MoveDown;
    this->controller->getProcess(message);
}
