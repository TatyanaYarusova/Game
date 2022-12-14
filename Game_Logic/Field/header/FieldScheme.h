#ifndef GAME_FIELDSCHEME_H
#define GAME_FIELDSCHEME_H

#include <vector>
#include <string>

enum class Type {
    open,
    sun,
    storm,
    well,
    part,
    platform,
    close,
    player,
};

struct FieldScheme {
    std::vector<std::vector<Type>> scheme;
    int count_part;
    explicit operator std::string() const;
};

#endif //GAME_FIELDSCHEME_H