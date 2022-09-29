#ifndef GAME_INPUTMESSAGE_H
#define GAME_INPUTMESSAGE_H

enum class InputCommand{
    MoveUp,
    MoveDown,
    MoveLeft,
    MoveRight,
    SetFieldWidth,
    SetFieldHeight,
    SetPlayerRole
};

struct InputMessage{
    InputCommand command;
    int value;
};

#endif //GAME_INPUTMESSAGE_H