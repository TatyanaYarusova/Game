//
// Created by tatyana on 17.09.22.
//

#ifndef UNTITLED_CELL_H
#define UNTITLED_CELL_H
#include <SFML/Graphics.hpp>
#include "Event.h"

class Cell {
private:
    int x;
    int y;
    bool is_passability;
    int count_sand;
    sf::RectangleShape draw_cell; //Графическое представление клетки
    Event value; // реализовать позже (колодец, деталь, взлетная площадка, укрытие)

    std::string Filename;
    sf::Image image;
    sf::Texture* texture;
    sf::Sprite map;
public:
        Cell(int x, int y, bool pos, int count);
        sf::RectangleShape getCell();
        void setPossability(bool pos);
        bool getPossability();
        int getCountSand();
        void setCountSand();
        void Color_update();
        sf::Sprite getSprite();
        void Color_update_2();

};



#endif //UNTITLED_CELL_H
