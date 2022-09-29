#ifndef GAME_GAMECONTROLLER_H
#define GAME_GAMECONTROLLER_H

#include "IController.h"

class GameController: public IController {
private:
    int width;
    int height;
    int role;
public:
    int getWidth();
    int getHeight();
    int getRole();
    void getProcess(const InputMessage &message) override;
};


#endif //GAME_GAMECONTROLLER_H