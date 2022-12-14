#ifndef GAME_INPUTMESSAGE_H
#define GAME_INPUTMESSAGE_H

enum InputCommand{ // убрала слово class
    MoveUp,
    MoveDown,
    MoveLeft,
    MoveRight,
    Stop,

    SetGameLevel,
    SetPlayerRole,
    SetOption,
    SetLevel,

    Save,
    Load
};

struct InputMessage{
    InputCommand command;
    int value;
};

#endif //GAME_INPUTMESSAGE_H