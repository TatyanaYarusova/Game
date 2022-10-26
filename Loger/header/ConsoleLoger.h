#ifndef GAME_CONSOLELOGER_H
#define GAME_CONSOLELOGER_H


#include "ILoger.h"

class ConsoleLoger : public ILoger{
public:
    void print(IMessage& message) override;
};


#endif //GAME_CONSOLELOGER_H