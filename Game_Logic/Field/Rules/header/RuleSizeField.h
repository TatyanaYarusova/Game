#ifndef GAME_RULESIZEFIELD_H
#define GAME_RULESIZEFIELD_H

#include "../../header/FieldScheme.h"

template<int X, int Y>
class RuleSizeField {
public:
    void update(FieldScheme& scheme) {
        scheme.scheme.resize(X);
        for (auto& row : scheme.scheme) {
            row.resize(Y);
        }
    }
};

#endif //GAME_RULESIZEFIELD_H