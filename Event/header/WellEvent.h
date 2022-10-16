#ifndef GAME_WELLEVENT_H
#define GAME_WELLEVENT_H

#include "EffectOnPlayer.h"

class WellEvent : public EffectOnPlayer{
public:
    WellEvent(Player* player): EffectOnPlayer(player){};
    void update() override;

};


#endif //GAME_WELLEVENT_H