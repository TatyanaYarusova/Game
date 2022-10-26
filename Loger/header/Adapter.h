#ifndef GAME_ADAPTER_H
#define GAME_ADAPTER_H


#include <vector>
#include "../Level/header/ILevel.h"
#include "ILoger.h"
#include "../Level/header/IMessage.h"

class Adapter {
private:
    std::vector<ILevel*> levels;
    std::vector<ILoger*> logers;
public:
    void addLogers(ILevel* level);
    void addLevels(ILoger* loger);
    void process(IMessage message, Option option);

};


#endif //GAME_ADAPTER_H