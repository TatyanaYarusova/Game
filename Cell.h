#ifndef UNTITLED_CELL_H
#define UNTITLED_CELL_H

#include "Event.h"

class Cell {
private:
    bool is_passability;
    int count_sand;
    Event value; // реализовать позже (колодец, деталь, взлетная площадка, укрытие)
public:
    Cell();
    Cell(bool is_passable, int count);
    void setPassability(bool pos);
    bool getPassability();
    int getCountSand();
    void setCountSand();
};


#endif //UNTITLED_CELL_H
