#include "../header/Level_other.h"

FieldScheme Level_other::generate() {
    scheme = this->generator.generate();
    return scheme;
}