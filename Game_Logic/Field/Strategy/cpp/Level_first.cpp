#include "../header/Level_first.h"

FieldScheme Level_first::generate() {
    scheme = this->generator.generate();
    return scheme;
}
