//
// Created by tatyana on 17.09.22.
//

#ifndef UNTITLED_FIELD_H
#define UNTITLED_FIELD_H
#include <vector>
#include "Cell.h"


class Field{

    int height;
    int width;
    int side_cell;
    std::vector<std::vector<Cell>> cells;
    int Player_pos_x;
    int Player_pos_y;

public:
    Field();
    Field(int, int);
    Field(Field& other);
    Field(Field&& other);
    Field& operator=(Field&& field);
    Field& operator=(const Field &field);
    std::vector<std::vector<Cell>>& getCells();
    int getHeight();
    int getWidth();
    void moveUp();
    void moveDown();
    void moveRight();
    void moveLeft();
    int getPlayer_pos_x();
    int getPlayer_pos_y();
};
#endif //UNTITLED_FIELD_H
