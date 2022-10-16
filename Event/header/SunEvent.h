#ifndef GAME_SUNEVENT_H
#define GAME_SUNEVENT_H


#include "EffectOnPlayer.h"

class SunEvent : public EffectOnPlayer {
public:
    SunEvent(Player* player):EffectOnPlayer(player){};
    void update() override;
};


#endif //GAME_SUNEVENT_H