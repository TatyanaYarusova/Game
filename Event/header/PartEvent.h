#ifndef GAME_PARTEVENT_H
#define GAME_PARTEVENT_H


#include "EffectOnPlayer.h"

class PartEvent : public EffectOnPlayer, public Observable {
public:
    PartEvent(Player* player): EffectOnPlayer(player){};
    void update() override;

};


#endif //GAME_PARTEVENT_H