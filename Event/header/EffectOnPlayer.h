#ifndef GAME_EFFECTONPLAYER_H
#define GAME_EFFECTONPLAYER_H


#include "IEvent.h"
#include "../../Game_Logic/header/Player.h"

class EffectOnPlayer : public IEvent  {
protected:
    Player* player;
public:
    EffectOnPlayer(Player* player);
    void update() override = 0;
};


#endif //GAME_EFFECTONPLAYER_H