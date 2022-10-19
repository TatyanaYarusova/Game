#ifndef GAME_OBSERVABLE_H
#define GAME_OBSERVABLE_H


#include "Observer.h"

class Observable {
protected:
    Observer* observer = nullptr;
public:
    void setObserver(Observer* observer);
    void notify();


};


#endif //GAME_OBSERVABLE_H