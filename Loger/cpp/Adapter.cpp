#include "../header/Adapter.h"

//void Adapter::addLogers(ILevel* level) {
//    levels.emplace_back(level);
//
//}

void Adapter::addLogers(ILoger* loger) {
    logers.emplace_back(loger);

}


void Adapter::process(std::string& string) {
    int n = static_cast<int>(option);
    switch (option) {
        case Option::All:
            for(int i = 0; i < n; i++){
                logers[i]->print(string);
                break;
            }

        case Option::ConsoleLogger:
            logers[n]->print(string);
            break;

        case Option::FileLogger:
            logers[n]->print(string);
            break;

        default:
            break;
    }

}

//void Adapter::setOption(Option option) {
//    this->option = option;
//
//}
