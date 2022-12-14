#ifndef GAME_RULEPLAYERPOSITION_H
#define GAME_RULEPLAYERPOSITION_H

#include <cstdlib>
#include "../../header/FieldScheme.h"

template<int Count>
class RulePlayerPosition {
public:
    void update(FieldScheme& scheme) {
        int x = rand() % scheme.scheme[0].size();
        int y = rand() % scheme.scheme[0].size();
        while (scheme.scheme[x][y] != Type::open) {
            x = rand() % scheme.scheme[0].size();
            y = rand() % scheme.scheme[0].size();
        }
        scheme.scheme[x][y] = Type::player;
    }
};


#endif //GAME_RULEPLAYERPOSITION_H