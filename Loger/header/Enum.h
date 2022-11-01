#ifndef GAME_ENUM_H
#define GAME_ENUM_H
enum class Level{
    Error,
    Status,
    Game,
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

#endif //GAME_ENUM_H