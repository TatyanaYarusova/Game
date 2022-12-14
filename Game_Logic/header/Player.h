#ifndef UNTITLED_PLAYER_H
#define UNTITLED_PLAYER_H
#include "SFML/Graphics.hpp"
#include "Observable.h"

class Player : public Observable{
private:
    int water;
    int count_part;
    int role;

public:
    Player(int name = 3);
    void setCountPart();
    void setCountPart(int count_part);
    int getCountPart();
    void setWater(int);
    int getWater();
    //1-
    //2-
    //3-Water Keeper
};


#endif //UNTITLED_PLAYER_H
