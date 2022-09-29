#ifndef GAME_PLAYERCONTROLLER_H
#define GAME_PLAYERCONTROLLER_H

#include "Player.h"
#include "Field.h"
#include "../../Input/header/IController.h"

class PlayerController:public IController {
private:
    Field* map;
public:
    PlayerController(Field* map);
    void changeMap(Field* otherMap);
    void moveUp();
    void moveDown();
    void moveRight();
    void moveLeft();
    void getProcess(const InputMessage &message) override;
};


#endif //GAME_PLAYERCONTROLLER_H