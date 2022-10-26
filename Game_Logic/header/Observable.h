#ifndef GAME_OBSERVABLE_H
#define GAME_OBSERVABLE_H


#include "Observer.h"
#include "../../Loger/cpp/Logger.h"

class Observable {
protected:
    Observer* observer = nullptr;
public:
    void setObserver(Observer* observer);
    void notify();
    void notify_logger(Message message);


};


#endif //GAME_OBSERVABLE_H