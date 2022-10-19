#include <iostream>
#include "../header/Win.h"

Win::Win(Player* player) : player(player){}

void Win::update() {
    std::cout<<"You are win!"<<"\n";
    this->notify();


}


