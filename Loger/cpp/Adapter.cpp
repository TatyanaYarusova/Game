#include "../header/Adapter.h"

void Adapter::addLogers(ILevel* level) {
    levels.emplace_back(level);

}

void Adapter::addLevels(ILoger* loger) {
    logers.emplace_back(loger);

}

void Adapter::process(IMessage message, Option option) {
    int n = static_cast<int>(Option::All);
    switch (option) {
        case Option::All:
            for(int i = 0; i < n; i++){
                logers[i]->print(message);
                break;
            }

        case Option::ConsoleLogger:
            logers[0]->print(message);
            break;

        case Option::FileLogger:
            logers[0]->print(message);
            break;

        default:
            break;
    }

}
