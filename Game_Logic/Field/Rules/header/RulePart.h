#ifndef GAME_RULEPART_H
#define GAME_RULEPART_H

#include <cstdlib>
#include "../../header/FieldScheme.h"

template<int Count>
class RulePart {
public:
    void update(FieldScheme& scheme) {
        for(int i = 0; i < Count; i++) {
            int x = rand() % scheme.scheme.size();
            int y = rand() % scheme.scheme.size();
            while (scheme.scheme[x][y] != Type::open) {
                x = rand() % scheme.scheme.size();
                y = rand() % scheme.scheme.size();
            }
            scheme.scheme[x][y] = Type::part;
        }
    }
};


#endif //GAME_RULEPART_H