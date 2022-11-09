#include <iostream>
#include "../header/Adapter.h"

void Adapter::addLogers(ILogger* loger) {
    logers.emplace_back(loger);
}

void Adapter::process(std::string& string) {
    int n = static_cast<int>(option);
    switch (option) {
        case Option::All:
            for(int i = 0; i < n ; i++){
                logers[i]->print(string);
            }
            break;

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

void Adapter::setOption(int opt) {
    switch (opt) {
        case 1:
            option = Option::ConsoleLogger;
            break;
        case 2:
            option = Option::FileLogger;
            break;
        case 3:
            option = Option::All;
            break;
        default:
            option = Option::ConsoleLogger;
    }

}

void Adapter::setLevel(int l) {
    switch (l) {
        case 1:
            level = Level::Error;
            break;
        case 2:
            level = Level::Status;
            break;
        case 3:
            level = Level::Game;
            break;
        default:
            level = Level::Error;
            break;
    }
}

std::string Adapter::makeString(Level level) {
    switch(level) {
        case Level::Error:
            return "[ErrorLevel]";
        case Level::Game:
            return "[GameLevel]";
        case Level::Status:
            return "[StatusLevel]";
        default:
            return "[Unknown]";
    }
}

void Adapter::getLog(LogMessage message) {
    if(message.level <= this->level){
        if(message.value != -1){
            string = makeString(message.level) + " " + message.message + std::to_string(message.value) + "\n";
        }
        else{
            string = makeString(message.level) + " " + message.message + "\n";
        }
        this->process(string);
    }
}

