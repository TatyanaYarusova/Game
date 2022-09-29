#ifndef GAME_INPUTMEDIATOR_H
#define GAME_INPUTMEDIATOR_H

#include <vector>
#include "InputMessage.h"
#include "IController.h"

class InputMediator {
private:
    std::vector<IController*> controllers;
public:
    void onCommandProcessed(const InputMessage& message);
    void addController(IController* controller);
    void removeController(IController* controller);
};


#endif //GAME_INPUTMEDIATOR_H