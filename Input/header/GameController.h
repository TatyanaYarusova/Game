#ifndef GAME_GAMECONTROLLER_H
#define GAME_GAMECONTROLLER_H

#include "IController.h"

class GameController: public IController {
private:
    int level;
    int role;
public:
    int getGameLevel();
    int getRole();
    void getProcess(const InputMessage &message) override;
};


#endif //GAME_GAMECONTROLLER_H