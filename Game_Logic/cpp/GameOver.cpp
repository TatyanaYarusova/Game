#include <iostream>
#include "../header/GameOver.h"

GameOver::GameOver(Player* player) : player(player) {}

void GameOver::update() {
    this->notify_logger(Message::Water, this->player->getWater());
    if(player->getWater() <= 0) {
        this->notify_logger(Message::Loss, 0);
        this->notify();
    }

}

void GameOver::update_logger(Message message, int value) {}
