#ifndef GAME_STORMMOVEEVENT_H
#define GAME_STORMMOVEEVENT_H


#include "EffectOnField.h"

class StormMoveEvent : public EffectOnField {
public:
    StormMoveEvent(Field* map, PlayerController* controller) : EffectOnField(map, controller){};
    void update() override;

};


#endif //GAME_STORMMOVEEVENT_H