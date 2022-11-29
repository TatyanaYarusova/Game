#ifndef GAME_PLATFOTMEVENT_H
#define GAME_PLATFOTMEVENT_H


#include "EffectOnField.h"
#include "EffectOnPlayer.h"
#include "../../Loger/header/LogObservable.h"

class PlatformEvent : public EffectOnPlayer, public Observable, public LogObservable{
private:
    int count = 0;
public:
    PlatformEvent(Player* player ):EffectOnPlayer(player){};
    void setCount(int count);
    void update() override;

};


#endif //GAME_PLATFOTMEVENT_H