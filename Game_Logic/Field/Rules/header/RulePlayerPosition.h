#ifndef GAME_RULEPLAYERPOSITION_H
#define GAME_RULEPLAYERPOSITION_H

#include "../../header/FieldScheme.h"

template<int X, int Y>
class RulePlayerPosition {
public:
    void update(FieldScheme& scheme) {
        scheme.scheme[X][Y] = Type::player;
    }
};

#endif //GAME_RULEPLAYERPOSITION_H