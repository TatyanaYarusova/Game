#ifndef GAME_RULEPART_H
#define GAME_RULEPART_H

#include <cstdlib>
#include "../../header/FieldScheme.h"
template<int ... Args>
class RulePart {};

template<int Count>
class RulePart<Count> {
public:
    void update(FieldScheme& scheme) {
        int count;
        if(Count > 5){
            count = 5;
        }
        else{
            count = Count;
        }
        for(int i = 0; i < count; i++) {
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
template<int X, int Y>
class RulePart<X, Y> {
public:
    void update(FieldScheme& scheme) {
        scheme.scheme[X][Y] = Type::part;
    }
};


#endif //GAME_RULEPART_H