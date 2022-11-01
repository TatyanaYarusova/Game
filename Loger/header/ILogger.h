#ifndef GAME_ILOGGER_H
#define GAME_ILOGGER_H

#include <string>

class ILogger{
public:
    virtual void print(std::string& string) = 0;
};

#endif //GAME_ILOGGER_H