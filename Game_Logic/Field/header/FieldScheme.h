#ifndef GAME_FIELDSCHEME_H
#define GAME_FIELDSCHEME_H

#include <vector>

enum class Type{
    open,
    sun,
    storm,
    well,
    part,
    storm_move,
    platform,
    close,
    player
};
struct FieldScheme{
    std::vector<std::vector<Type>> scheme;
    int count_part;
};
#endif //GAME_FIELDSCHEME_H