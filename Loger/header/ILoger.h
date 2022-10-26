#ifndef GAME_ILOGER_H
#define GAME_ILOGER_H

#include "../Level/header/IMessage.h"

class ILoger{
public:
    virtual void print(IMessage& message) = 0;
};

#endif //GAME_ILOGER_H