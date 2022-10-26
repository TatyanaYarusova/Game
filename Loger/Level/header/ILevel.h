#ifndef GAME_ILEVEL_H
#define GAME_ILEVEL_H

#include "../../../Game_Logic/header/Observer.h"

enum class Option{
    ConsoleLogger,
    FileLogger,
    All
};


class ILevel : public Observer {
public:
    void update() override = 0;
};


#endif //GAME_ILEVEL_H