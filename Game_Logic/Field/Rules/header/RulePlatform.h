#ifndef GAME_RULEPLATFORM_H
#define GAME_RULEPLATFORM_H

#include "../../header/FieldScheme.h"

template<int Count, int X, int Y>
class RulePlatform {
public:
    void update(FieldScheme& scheme) {
        scheme.scheme[X][Y] = Type::platform;
        scheme.count_part = Count;
    }
};

#endif //GAME_RULEPLATFORM_H