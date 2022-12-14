#include "../header/GameController.h"

#include "../../Game_Logic/header/Game.h"

int GameController::getRole() {
    return role;
}

int GameController::getGameLevel() {
    return level;
}

void GameController::getProcess(const InputMessage& message) {
    switch (message.command) {
        case InputCommand::SetPlayerRole:
            role = message.value;
            break;
        case InputCommand::SetGameLevel:
            level = message.value;
            break;
        case InputCommand::Save:
            game->save();
            break;
        case InputCommand::Load:
            game->load();
            break;
        default:
            break;

    }

}

GameController::GameController(Game* game) : game(game) {}




