#include "../header/StormMoveEvent.h"

void StormMoveEvent::update() {
    this->notify_log(LogMessage{"StormMoveEvent moved the player one cell DOWN",Level::Game});
    InputMessage message;
    message.command = InputCommand::MoveDown;
    this->controller->getProcess(message);
}
