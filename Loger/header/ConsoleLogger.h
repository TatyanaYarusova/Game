#ifndef GAME_CONSOLELOGGER_H
#define GAME_CONSOLELOGGER_H


#include "ILogger.h"

class ConsoleLogger : public ILogger{
public:
    void print(std::string &string) override;
};


#endif //GAME_CONSOLELOGGER_H