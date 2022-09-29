#include "../header/PlayerController.h"

void PlayerController::changeMap(Field* otherMap) {
    map = otherMap;
}

void PlayerController::moveLeft() {
    if (this->map->getCell((map->getPlayerPos().x - 1 + map->getWidth()) % map->getWidth(), map->getPlayerPos().y).getPassability()) {
        map->setPlayerPos((map->getPlayerPos().x - 1 + map->getWidth()) % map->getWidth(), map->getPlayerPos().y);
    }
}

void PlayerController::moveRight() {
    if (this->map->getCell((map->getPlayerPos().x + 1) % map->getWidth(), map->getPlayerPos().y).getPassability()) {
        map->setPlayerPos((map->getPlayerPos().x + 1) % map->getWidth(), map->getPlayerPos().y);
    }
}

void PlayerController::moveDown() {
    if (this->map->getCell(map->getPlayerPos().x, (map->getPlayerPos().y + 1) % map->getHeight()).getPassability()) {
        map->setPlayerPos(map->getPlayerPos().x, (map->getPlayerPos().y + 1) % map->getHeight());
    }
}

void PlayerController::moveUp() {
    if (this->map->getCell(map->getPlayerPos().x, (map->getPlayerPos().y - 1 + map->getHeight()) % map->getHeight()).getPassability()) {
        map->setPlayerPos(map->getPlayerPos().x, (map->getPlayerPos().y - 1 + map->getHeight()) % map->getHeight());
    }

}

void PlayerController::getProcess(const InputMessage& message) {
    switch (message.command) {
        case InputCommand::MoveDown:
            moveDown();
            break;
        case InputCommand::MoveRight:
            moveRight();
            break;
        case InputCommand::MoveLeft:
            moveLeft();
            break;
        case InputCommand::MoveUp:
            moveUp();
            break;
        default:
            break;
    }

}

PlayerController::PlayerController(Field* map): map(map) {}

