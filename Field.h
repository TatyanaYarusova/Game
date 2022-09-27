#ifndef UNTITLED_FIELD_H
#define UNTITLED_FIELD_H

#include <vector>
#include "Cell.h"


class Field {

    int height;
    int width;
    int side_cell;
    std::vector<std::vector<Cell>> cells;
    int player_pos_x;
    int player_pos_y;

public:
    Field();
    Field(int, int);
    Field(const Field& other);
    Field(Field&& other) noexcept;
    Field& operator=(Field&& field) noexcept;
    Field& operator=(const Field& field);
    Cell getCell(int x, int y);
    int getHeight() const;
    int getWidth() const;
    void moveUp();
    void moveDown();
    void moveRight();
    void moveLeft();
    int getPlayerPosX() const;
    int getPlayerPosY() const;
};

#endif //UNTITLED_FIELD_H
