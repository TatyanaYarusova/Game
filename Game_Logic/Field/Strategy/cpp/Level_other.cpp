#include "../header/Level_other.h"

FieldScheme Level_other::generate() {
    scheme.scheme.resize(5);
    for (auto& row : scheme.scheme) {
        row.resize(5);
    }
    this->generator.generate(scheme);
    return scheme;
}