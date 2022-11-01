#include "../header/LoggerController.h"

LoggerController::LoggerController(Adapter* adapter) {
    this->adapter = adapter;
}

void LoggerController::getProcess(const InputMessage& message) {
    switch (message.command) {
        case InputCommand::SetOption:
            adapter->setOption(message.value);
            break;
        case InputCommand::SetLevel:
            adapter->setLevel(message.value);
            break;
        default:
            break;

    }

}


