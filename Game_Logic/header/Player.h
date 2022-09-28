#ifndef UNTITLED_PLAYER_H
#define UNTITLED_PLAYER_H
#include "SFML/Graphics.hpp"



class Player{
private:
    int x;
    int y;
    int height;
    int width;

    std::string Filename;
    sf::Image heroim;
    sf::Texture herotex;
    sf::Sprite* herosprite;

    int water;
    int count_part;
    int role;

public:
    Player(int name = 3);
    //1-
    //2-
    //3-Water Keeper

    sf:: Sprite* getPlayer();
    void move(int dx, int dy);
};


#endif //UNTITLED_PLAYER_H
