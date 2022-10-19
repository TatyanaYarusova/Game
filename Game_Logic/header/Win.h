#ifndef GAME_WIN_H
#define GAME_WIN_H


#include "Observable.h"
#include "Player.h"

class Win : public Observable , public Observer{
private:
    Player* player;
public:
    Win(Player* player);
    void update() override;
};


#endif //GAME_WIN_H