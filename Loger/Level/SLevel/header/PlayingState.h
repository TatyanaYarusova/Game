#ifndef GAME_PLAYINGSTATE_H
#define GAME_PLAYINGSTATE_H


#include "IState.h"

class PlayingState : public IState {
public:
    PlayingState():IState(StateEnum::PLAYING){};
    void play(SLevel* c_state) override;
    void save(SLevel* c_state) override;
    void win(SLevel* c_state) override;
    void loss(SLevel* c_state) override;
};


#endif //GAME_PLAYINGSTATE_H