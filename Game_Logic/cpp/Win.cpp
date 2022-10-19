#include <iostream>
#include "../header/Win.h"

Win::Win(Player* player) : player(player){}

void Win::update() {
    if(player->getCountPart() >= 1){
        std::cout<<"You are win!"<<"\n";
        this->notify();
    }
    else{
        std::cout<<"You have "<<player->getCountPart()<<" part. You should found >= 1 part!\n";
    }


}


