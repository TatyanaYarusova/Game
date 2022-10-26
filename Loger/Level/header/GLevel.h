#ifndef GAME_GLEVEL_H
#define GAME_GLEVEL_H


#include "ILevel.h"

enum class GameEnum{
    Part,
    Water,
    MoveLeft,
    MoveRight,
    MoveDown,
    MoveUp
};

class GLevel : public ILevel {
    GameEnum status;
private:
    void update() override;
    void water();
    void part();
    void moveLeft();
    void moveRight();
    void moveDown();
    void moveUp();

};


#endif //GAME_GLEVEL_H