#include "../header/FieldHelper.h"

#include "../../../Event/header/PartEvent.h"
#include "../../../Event/header/PlatfotmEvent.h"
#include "../../../Event/header/StormEvent.h"
#include "../../../Event/header/SunEvent.h"
#include "../../../Event/header/WellEvent.h"

std::map<size_t, Type> FieldHelper::event_map{
        {typeid(PartEvent).hash_code(),     Type::part},
        {typeid(PlatformEvent).hash_code(), Type::platform},
        {typeid(StormEvent).hash_code(),    Type::storm},
        {typeid(SunEvent).hash_code(),      Type::sun},
        {typeid(WellEvent).hash_code(),     Type::well}
};

Type FieldHelper::getType(Cell& cell) {
    if (!cell.getPassability()) {
        return Type::close;
    }
    if (cell.getEvent() == nullptr) {
        return Type::open;
    }
    return event_map[typeid(*cell.getEvent()).hash_code()];
}
