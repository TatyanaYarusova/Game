#ifndef GAME_PLAYERCONTROLLER_H
#define GAME_PLAYERCONTROLLER_H

#include "../../Game_Logic/header/Player.h"
#include "../../Game_Logic/header/Field.h"
#include "IController.h"

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