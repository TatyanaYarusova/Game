#ifndef UNTITLED_FIELD_H
#define UNTITLED_FIELD_H

#include <vector>
#include "Cell.h"

#include "../../Point.h"


class Field : public Observable{

    int height;
    int width;
    int side_cell;
    std::vector<std::vector<Cell>> cells;
    Point player_pos;

public:
    Field();
    Field(int, int);
    Field(const Field& other);
    Field(Field&& other) noexcept;
    Field& operator=(Field&& field) noexcept;
    Field& operator=(const Field& field);
    Cell& getCell(int x, int y);
    int getHeight() const;
    int getWidth() const;
    Point getPlayerPos() const;
    void setPlayerPos(int, int);

};

#endif //UNTITLED_FIELD_H
