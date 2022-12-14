#ifndef GAME_FIELDHELPER_H
#define GAME_FIELDHELPER_H


#include "../../header/Cell.h"
#include "FieldScheme.h"
#include "../../../Event/header/PartEvent.h"
#include "../../../Event/header/PlatfotmEvent.h"
#include "../../../Event/header/StormEvent.h"
#include "../../../Event/header/SunEvent.h"
#include "../../../Event/header/WellEvent.h"

typedef std::map<size_t, Type> EventMap;

class FieldHelper {
private:
    EventMap event_map{
            {typeid(PartEvent).hash_code(),     Type::part},
            {typeid(PlatformEvent).hash_code(), Type::platform},
            {typeid(StormEvent).hash_code(),    Type::storm},
            {typeid(SunEvent).hash_code(),      Type::sun},
            {typeid(WellEvent).hash_code(),     Type::well}
    };
public:
    Type getType(Cell& cell);
};


#endif //GAME_FIELDHELPER_H