#include <iostream>
#include "../header/Status_game.h"

Status_game::Status_game(bool value) : value(value) {}
Status_game::Status_game() : value(true) {}

void Status_game::update() {
    this->value = false;
}

bool Status_game::getValue() {
    return this->value;
}

void Status_game::update_logger(Message message, int value) {}

