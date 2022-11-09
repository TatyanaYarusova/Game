#ifndef GAME_ADAPTER_H
#define GAME_ADAPTER_H


#include <vector>
#include "ILogger.h"
#include "Enum.h"
#include "LogMessage.h"
#include "LogObserver.h"

class Adapter : public LogObserver{
private:
    std::vector<ILogger*> logers;
    Level level;
    Option option;
    std::string string;
public:
    void addLogers(ILogger* loger);
    void process(std::string& string);
    void setOption(int opt);
    void setLevel(int l);
    std::string makeString(Level level);
    void getLog(LogMessage message) override;

};


#endif //GAME_ADAPTER_H