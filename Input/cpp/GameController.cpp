#include "../header/GameController.h"

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
        default:
            break;

    }

}




