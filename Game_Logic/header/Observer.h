#ifndef GAME_OBSERVER_H
#define GAME_OBSERVER_H

#include "../../Loger/header/Enum.h"

class Observer {
public:
    virtual void update() = 0;
    virtual void update_logger(Message message, int value) = 0;
};


#endif //GAME_OBSERVER_H