#ifndef GAME_SLEVEL_H
#define GAME_SLEVEL_H


#include "../../header/ILevel.h"
#include "IState.h"
#include "PlayingState.h"
#include "../../../../Game_Logic/header/Player.h"
#include "../../../../Game_Logic/header/Field.h"

enum class StateEnum{
    PLAYING,
    WIN,
    LOSS,
    SAVE
};

class SLevel : public ILevel{
private:
//    Player* player;
//    Field* map;
    IState* current_state;
protected:
    //StateEnum* current_state;
    //SMessage message;
public:
    SLevel(IState state): current_state(state){};
    void changeState(IState* state);

    void play();
    void save();
    void win();
    void loss();
    IState* getState();
    ~SLevel();


};


#endif //GAME_SLEVEL_H