#ifndef GAME_RULESUN_H
#define GAME_RULESUN_H

#include <cstdlib>
#include "../../header/FieldScheme.h"

template<int... Args>
class RuleSun {};

template<int Count>
class RuleSun<Count> {
public:
    void update(FieldScheme& scheme) {
        for(int i = 0; i < Count; i++){
            int x = rand() % scheme.scheme[0].size();
            int y = rand() % scheme.scheme[0].size();
            while(scheme.scheme[x][y] != Type::open){
                x = rand() % scheme.scheme[0].size();
                y = rand() % scheme.scheme[0].size();
            }
            scheme.scheme[x][y] = Type::sun;
        }
    }
};

template<int X, int Y>
class RuleSun<X, Y> {
public:
    void update(FieldScheme& scheme) {
        scheme.scheme[X][Y] = Type::sun;
    }
};

#endif //GAME_RULESUN_H