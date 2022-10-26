#ifndef GAME_OBSERVER_H
#define GAME_OBSERVER_H


#include "../../Loger/cpp/Logger.h"

class Observer {
public:
    virtual void update() = 0;
    virtual void update_logger(Message message) = 0;
};


#endif //GAME_OBSERVER_H