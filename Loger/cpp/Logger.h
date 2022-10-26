#ifndef GAME_LOGGER_H
#define GAME_LOGGER_H

#include "../header/Adapter.h"

enum class Level{
    GameLevel,
    ErrorLevel,
    StatusLevel
};

enum class Message{
    Water,
    Part,
    Platforma,
    Storm,
    MoveStorm,
    MoveLeft,
    MoveRight,
    MoveDown,
    MoveUp,
    CellClose,

    Win,
    Loss,
    Save,
    Play,

    Error
};

enum class Option{
    ConsoleLogger,
    FileLogger,
    All
};

class Logger {
private:
    Level level;
    Message message;
    Adapter* adapter;
    Player* player;
    Field* field;

};


#endif //GAME_LOGGER_H