#ifndef GAME_OBSERVABLE_H
#define GAME_OBSERVABLE_H


#include <vector>
#include "Observer.h"

class Observable {
protected:
    std::vector<Observer*> observers;
    //Observer* observer = nullptr;
public:
    void setObserver(Observer* observer);
    void notify();
    void notify_logger(Message message, int value);


};


#endif //GAME_OBSERVABLE_H