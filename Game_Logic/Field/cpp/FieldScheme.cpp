#include "../header/FieldScheme.h"

FieldScheme::operator std::string() const {
    std::string line;
    line.reserve((scheme.size() + 1) * scheme[0].size() + 3); // + 1 для \n
    for (int i = 0; i < scheme.size(); i++) {
        for (int j = 0; j < scheme[0].size(); j++) {
            line += std::to_string(int(scheme[i][j]));
        }
        line += '\n';
    }
    line += std::to_string(count_part) + "\n";
    return line;
}
