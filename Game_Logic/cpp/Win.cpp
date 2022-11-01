#include <iostream>
#include "../header/Win.h"

Win::Win(Player* player) : player(player){}

void Win::update() {
    this->notify();
    this->notify_log(LogMessage{"You are win!", Level::Status});

}


