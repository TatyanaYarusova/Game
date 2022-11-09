#ifndef GAME_INPUTMESSAGE_H
#define GAME_INPUTMESSAGE_H

enum InputCommand{ // убрала слово class
    MoveUp,
    MoveDown,
    MoveLeft,
    MoveRight,
    Stop,

    SetFieldWidth,
    SetFieldHeight,
    SetPlayerRole,
    SetOption,
    SetLevel
};

struct InputMessage{
    InputCommand command;
    int value;
};

#endif //GAME_INPUTMESSAGE_H