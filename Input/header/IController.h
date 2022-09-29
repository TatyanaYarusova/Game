#ifndef GAME_ICONTROLLER_H
#define GAME_ICONTROLLER_H
#include "InputMessage.h"

class IController{
public:
    virtual void getProcess(const InputMessage& message) = 0;
};

#endif //GAME_ICONTROLLER_H