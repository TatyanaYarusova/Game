#include "../header/StormMoveEvent.h"

void StormMoveEvent::update() {
    this->notify_logger(Message::MoveStorm, 0);
    InputMessage message;
    message.command = InputCommand::MoveDown;
    this->controller->getProcess(message);
}
