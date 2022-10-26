#ifndef GAME_ILOGER_H
#define GAME_ILOGER_H

#include <string>

class ILoger{
public:
    virtual void print(std::string& string) = 0;
};

#endif //GAME_ILOGER_H