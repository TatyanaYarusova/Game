#ifndef GAME_STATUS_GAME_H
#define GAME_STATUS_GAME_H

#include "Observer.h"
#include "Player.h"
#include "Field.h"

class Status_game : public Observer {
    bool value;
public:
    Status_game();
    Status_game(bool);
    void update() override;
    bool getValue();

};


#endif //GAME_STATUS_GAME_H