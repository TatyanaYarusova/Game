#include "../header/PlayerController.h"

void PlayerController::changeMap(Field* otherMap) {
    map = otherMap;
}
void PlayerController::callEvent(){
    if(this->map->getCell(map->getPlayerPos().x, map->getPlayerPos().y).getEvent()) {
        this->map->getCell(map->getPlayerPos().x, map->getPlayerPos().y).getEvent()->update();
    }
}
void PlayerController::moveLeft() {
    if (this->map->getCell((map->getPlayerPos().x - 1 + map->getWidth()) % map->getWidth(), map->getPlayerPos().y).getPassability()) {
        map->setPlayerPos((map->getPlayerPos().x - 1 + map->getWidth()) % map->getWidth(), map->getPlayerPos().y);
        callEvent();
    }
}

void PlayerController::moveRight() {
    if (this->map->getCell((map->getPlayerPos().x + 1) % map->getWidth(), map->getPlayerPos().y).getPassability()) {
        map->setPlayerPos((map->getPlayerPos().x + 1) % map->getWidth(), map->getPlayerPos().y);
        callEvent();
    }
}

void PlayerController::moveDown() {
    if (this->map->getCell(map->getPlayerPos().x, (map->getPlayerPos().y + 1) % map->getHeight()).getPassability()) {
        map->setPlayerPos(map->getPlayerPos().x, (map->getPlayerPos().y + 1) % map->getHeight());
        callEvent();
    }

}

void PlayerController::moveUp() {
    if (this->map->getCell(map->getPlayerPos().x, (map->getPlayerPos().y - 1 + map->getHeight()) % map->getHeight()).getPassability()) {
        map->setPlayerPos(map->getPlayerPos().x, (map->getPlayerPos().y - 1 + map->getHeight()) % map->getHeight());
        callEvent();
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

PlayerController::PlayerController(Field* map, Player* player): map(map), player(player) {}

