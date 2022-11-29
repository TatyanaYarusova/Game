#ifndef UNTITLED_CELL_H
#define UNTITLED_CELL_H

#include "../../Event/header/IEvent.h"


class Cell {
private:
    bool is_passability;
    int count_sand;
    IEvent* event = nullptr;
public:
    Cell();
    Cell(bool is_passable, int count);
    void setPassability(bool pos);
    bool getPassability();
    void setEvent(IEvent* event);
    IEvent* getEvent();
};


#endif //UNTITLED_CELL_H
