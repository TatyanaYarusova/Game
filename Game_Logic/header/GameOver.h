#ifndef GAME_GAMEOVER_H
#define GAME_GAMEOVER_H


#include "Observer.h"
#include "Observable.h"
#include "Player.h"
#include "../../Loger/header/LogObservable.h"

class GameOver : public Observer, public Observable, public LogObservable {
private:
    Player* player;
public:
    GameOver(Player* player);
    void update() override;

};


#endif //GAME_GAMEOVER_H