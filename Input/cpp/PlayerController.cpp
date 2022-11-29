#include "../header/PlayerController.h"

void PlayerController::changeMap(Field* otherMap) {
    map = otherMap;
}
void PlayerController::callEvent(){
    if(this->map->getCell(map->getPlayerPos().x, map->getPlayerPos().y).getEvent()) {
        this->map->getCell(map->getPlayerPos().x, map->getPlayerPos().y).getEvent()->update();
        //this->map->getCell(map->getPlayerPos().x, map->getPlayerPos().y).setEvent(nullptr);

    }

}
void PlayerController::moveLeft() {
    if (this->map->getCell((map->getPlayerPos().x - 1 + map->getWidth()) % map->getWidth(), map->getPlayerPos().y).getPassability()) {
        map->setPlayerPos((map->getPlayerPos().x - 1 + map->getWidth()) % map->getWidth(), map->getPlayerPos().y);
        this->notify_log(LogMessage{"Player has moved one cell LEFT!",Level::Game});
        callEvent();

    }
    else{
        this->notify_log(LogMessage{"Cell is locked!", Level::Error});
    }
}

void PlayerController::moveRight() {
    if (this->map->getCell((map->getPlayerPos().x + 1) % map->getWidth(), map->getPlayerPos().y).getPassability()) {
        map->setPlayerPos((map->getPlayerPos().x + 1) % map->getWidth(), map->getPlayerPos().y);
        this->notify_log(LogMessage{"Player has moved one cell RIGHT!",Level::Game});
        callEvent();

    }
    else{
        this->notify_log(LogMessage{"Cell is locked!", Level::Error});
    }
}

void PlayerController::moveDown() {
    if (this->map->getCell(map->getPlayerPos().x, (map->getPlayerPos().y + 1) % map->getHeight()).getPassability()) {
        map->setPlayerPos(map->getPlayerPos().x, (map->getPlayerPos().y + 1) % map->getHeight());
        this->notify_log(LogMessage{"Player has moved one cell DOWN!",Level::Game});
        callEvent();

    }
    else{
        this->notify_log(LogMessage{"Cell is locked!", Level::Error});
    }

}

void PlayerController::moveUp() {
    if (this->map->getCell(map->getPlayerPos().x, (map->getPlayerPos().y - 1 + map->getHeight()) % map->getHeight()).getPassability()) {
        map->setPlayerPos(map->getPlayerPos().x, (map->getPlayerPos().y - 1 + map->getHeight()) % map->getHeight());
        this->notify_log(LogMessage{"Player has moved one cell UP!",Level::Game});
        callEvent();

    }
    else{
        this->notify_log(LogMessage{"Cell is locked!", Level::Error});
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

