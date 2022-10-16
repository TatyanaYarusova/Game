#ifndef GAME_EFFECTONFIELD_H
#define GAME_EFFECTONFIELD_H


#include "IEvent.h"
#include "../../Game_Logic/header/Field.h"
#include "../../Input/header/PlayerController.h"

class EffectOnField: public IEvent {
protected:
    Field* map;
    PlayerController* controller;

public:
    EffectOnField(Field* map, PlayerController* controller);
    void update() override = 0;

};


#endif //GAME_EFFECTONFIELD_H