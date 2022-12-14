#include "../header/FieldHelper.h"

Type FieldHelper::getType(Cell& cell) {
    if (!cell.getPassability()) {
        return Type::close;
    }
    if (cell.getEvent() == nullptr) {
        return Type::open;
    }
    return event_map[typeid(*cell.getEvent()).hash_code()];
}
