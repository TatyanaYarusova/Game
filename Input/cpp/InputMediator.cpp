#include "../header/InputMediator.h"
#include <algorithm>

void InputMediator::onCommandProcessed(const InputMessage& message) {
    for(auto controller : controllers){
        controller->getProcess(message);
    }
}

void InputMediator::addController(IController* controller) {
    controllers.emplace_back(controller);
}

void InputMediator::removeController(IController* controller) {
    controllers.erase(std::remove(controllers.begin(), controllers.end(),controller));
}
