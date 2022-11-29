#ifndef GAME_RULESTORM_H
#define GAME_RULESTORM_H

#include <cstdlib>
#include "../../header/FieldScheme.h"

template<int... Args>
class RuleStorm {};

template<int Count>
class RuleStorm<Count> {
public:
    void update(FieldScheme& scheme) {
        for(int i = 0; i < Count; i++){
            int x = rand() % scheme.scheme[0].size();
            int y = rand() % scheme.scheme[0].size();
            while(scheme.scheme[x][y] != Type::open){
                x = rand() % scheme.scheme[0].size();
                y = rand() % scheme.scheme[0].size();
            }
            scheme.scheme[x][y] = Type::storm;
        }
    }
};

template<int X, int Y>
class RuleStorm<X, Y> {
public:
    void update(FieldScheme& scheme) {
        scheme.scheme[X][Y] = Type::well;
    }
};

#endif //GAME_RULESTORM_H