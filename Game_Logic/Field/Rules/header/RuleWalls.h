#ifndef GAME_RULEWALLS_H
#define GAME_RULEWALLS_H

#include <cmath>
#include "../../header/FieldScheme.h"


template<int... Args>
class RuleWalls {};

template<int Count>
class RuleWalls<Count> {
public:
    void update(FieldScheme& scheme) {
        for(int i = 0; i < Count; i++){
            int x = rand() % scheme.scheme[0].size();
            int y = rand() % scheme.scheme[0].size();
            while(scheme.scheme[x][y] != Type::open){
                x = rand() % scheme.scheme[0].size();
                y = rand() % scheme.scheme[0].size();
            }
            scheme.scheme[x][y] = Type::close;
        }
    }
};

template<int X, int Y>
class RuleWalls<X, Y> {
public:
    void update(FieldScheme& scheme) {
        scheme.scheme[X][Y] = Type::close;
    }
};

#endif //GAME_RULEWALLS_H