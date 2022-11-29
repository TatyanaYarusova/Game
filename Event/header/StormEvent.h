#ifndef GAME_STORMEVENT_H
#define GAME_STORMEVENT_H


#include "EffectOnField.h"
#include "../../Loger/header/LogObservable.h"

class StormEvent : public EffectOnField, public Observable, public LogObservable{
public:
    StormEvent(Field* map, PlayerController* playerController = nullptr) : EffectOnField(map, playerController) {};
    void update() override;
};


#endif //GAME_STORMEVENT_H