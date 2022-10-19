#ifndef GAME_PLATFOTMEVENT_H
#define GAME_PLATFOTMEVENT_H


#include "EffectOnField.h"
#include "EffectOnPlayer.h"

class PlatformEvent : public EffectOnPlayer, public Observable{
public:
    PlatformEvent(Player* player ):EffectOnPlayer(player){};
    void update() override;

};


#endif //GAME_PLATFOTMEVENT_H