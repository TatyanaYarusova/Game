#ifndef GAME_GAMECONTROLLER_H
#define GAME_GAMECONTROLLER_H

#include "IController.h"

class Game;

class GameController: public IController {
private:
    int level;
    int role;
    Game* game;
public:
    int getGameLevel();
    int getRole();
    void getProcess(const InputMessage &message) override;
    explicit GameController(Game* game);
};


#endif //GAME_GAMECONTROLLER_H