#include "../header/GameController.h"

int GameController::getHeight() {
    return height;
}

int GameController::getWidth() {
    return width;
}

void GameController::getProcess(const InputMessage& message) {
    switch (message.command) {
        case InputCommand::SetPlayerRole:
            role = message.value;
            break;
        case InputCommand::SetFieldHeight:
            height = message.value;
            break;
        case InputCommand::SetFieldWidth:
            width = message.value;
            break;
        default:
            break;

    }

}

int GameController::getRole() {
    return role;
}
