#include "../header/Level_first.h"

FieldScheme Level_first::generate() {
    scheme.scheme.resize(7);
    for (auto& row : scheme.scheme) {
        row.resize(7);
    }
    this->generator.generate(scheme);
    return scheme;
}
