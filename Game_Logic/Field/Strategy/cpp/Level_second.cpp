#include "../header/Level_second.h"

FieldScheme Level_second::generate() {
    scheme.scheme.resize(9);
    for (auto& row : scheme.scheme) {
        row.resize(9);
    }
    this->generator.generate(scheme);
    return scheme;
}