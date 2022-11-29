#include "../header/Level_second.h"

FieldScheme Level_second::generate() {
    scheme = this->generator.generate();
    return scheme;
}