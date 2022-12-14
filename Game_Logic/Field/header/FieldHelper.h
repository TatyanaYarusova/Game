#ifndef GAME_FIELDHELPER_H
#define GAME_FIELDHELPER_H


#include "../../header/Cell.h"
#include "FieldScheme.h"

class FieldHelper {
private:
    static std::map<size_t, Type> event_map;
public:
    static Type getType(Cell& cell);
};


#endif //GAME_FIELDHELPER_H