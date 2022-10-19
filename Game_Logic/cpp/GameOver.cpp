#include <iostream>
#include "../header/GameOver.h"

GameOver::GameOver(Player* player) : player(player) {}

void GameOver::update() {
    std::cout<<"You have "<<this->player->getCountPart()<<" part."<<"\n";
    std::cout<<"You have "<<this->player->getWater()<<" water."<<"\n";
    if(player->getWater() <= 0) {
        std::cout << "Game over! You lost all the water!(" << "\n";
        this->notify();
    }

}
