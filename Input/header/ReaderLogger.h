#ifndef GAME_READERLOGGER_H
#define GAME_READERLOGGER_H


#include "InputMediator.h"

class ReaderLogger {
private:
    InputMediator* mediator;
public:
    ReaderLogger(InputMediator* mediator);
    void readOption();
};


#endif //GAME_READERLOGGER_H