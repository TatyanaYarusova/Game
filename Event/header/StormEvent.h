#ifndef GAME_STORMEVENT_H
#define GAME_STORMEVENT_H


#include "EffectOnField.h"

class StormEvent : public EffectOnField, public Observable {
public:
    StormEvent(Field* map, PlayerController* controller): EffectOnField(map, controller){};
    void update() override;
};


#endif //GAME_STORMEVENT_H