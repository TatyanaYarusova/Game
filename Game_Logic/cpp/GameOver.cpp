#include <iostream>
#include "../header/GameOver.h"

GameOver::GameOver(Player* player) : player(player) {}

void GameOver::update() {
    this->notify_log(LogMessage{"Water: ", Level::Game, player->getWater()});
    if(player->getWater() <= 0) {
        this->notify_log(LogMessage{"You are loss!(", Level::Status});
        this->notify();
        std::cout<<"You are loss!(\n";
    }

}

