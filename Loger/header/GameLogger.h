#ifndef GAME_GAMELOGGER_H
#define GAME_GAMELOGGER_H


#include "../../Game_Logic/header/Observer.h"
#include "Enum.h"
#include "Adapter.h"

class GameLogger : public Observer{
private:
    Level level;
    Adapter* adapter;
    Option option;
    std::string string;
public:
    GameLogger(Adapter* adapter):adapter(adapter){};
    void update_logger(Message message, int value) override;
    void update() override;


};


#endif //GAME_GAMELOGGER_H