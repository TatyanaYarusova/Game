#ifndef GAME_ISTATE_H
#define GAME_ISTATE_H

#include "SLevel.h"

class IState {
    StateEnum state;
public:
    IState(StateEnum state):state(state){};
    //virtual void changeState(IState) = 0;
    virtual void play(SLevel* c_state) = 0;
    virtual void save(SLevel* c_state) = 0;
    virtual void win(SLevel* c_state) = 0;
    virtual void loss(SLevel* c_state) = 0;
};


#endif //GAME_ISTATE_H