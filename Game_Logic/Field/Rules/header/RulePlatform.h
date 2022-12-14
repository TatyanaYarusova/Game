#ifndef GAME_RULEPLATFORM_H
#define GAME_RULEPLATFORM_H

#include "../../header/FieldScheme.h"

template<int Count>
class RulePlatform {
public:
    void update(FieldScheme& scheme) {
        int x = rand() % scheme.scheme[0].size();
        int y = rand() % scheme.scheme[0].size();
        while(scheme.scheme[x][y] != Type::open){
            x = rand() % scheme.scheme[0].size();
            y= rand() % scheme.scheme[0].size();
        }
            scheme.scheme[x][y] = Type::platform;
            scheme.count_part = Count;
    }
};

#endif //GAME_RULEPLATFORM_H