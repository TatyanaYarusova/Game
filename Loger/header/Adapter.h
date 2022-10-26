#ifndef GAME_ADAPTER_H
#define GAME_ADAPTER_H


#include <vector>
#include "ILoger.h"
#include "Enum.h"

class Adapter {
private:
    //std::vector<ILevel*> levels;
    std::vector<ILoger*> logers;
    Option option = Option::ConsoleLogger;
public:
    //void addLogers(ILevel* level);
    void addLogers(ILoger* loger);
    void process(std::string& string);
    //void setOption(Option option);


};


#endif //GAME_ADAPTER_H