#ifndef GAME_PLAYERCONTROLLER_H
#define GAME_PLAYERCONTROLLER_H

#include "../../Game_Logic/header/Player.h"
#include "../../Game_Logic/header/Field.h"
#include "IController.h"
#include "../../Draw_SFML/header/DrawPlayer.h"
#include "../../Loger/header/LogObservable.h"


class PlayerController:public IController, public Observable, public LogObservable {
private:
    Field* map;
    Player* player;
public:
    PlayerController(Field* map, Player* player);
    void changeMap(Field* otherMap);
    void moveUp();
    void moveDown();
    void moveRight();
    void moveLeft();
    void getProcess(const InputMessage &message) override;
    void callEvent();

};


#endif //GAME_PLAYERCONTROLLER_H