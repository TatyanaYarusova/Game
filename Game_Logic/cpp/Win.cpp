#include <iostream>
#include "../header/Win.h"

Win::Win(Player* player) : player(player){}

void Win::update() {
    this->notify_logger(Message::Win, 0);
    this->notify();


}

void Win::update_logger(Message message, int value) {}


