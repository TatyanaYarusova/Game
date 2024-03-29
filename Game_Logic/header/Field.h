#ifndef UNTITLED_FIELD_H
#define UNTITLED_FIELD_H

#include <vector>
#include "Cell.h"

#include "../../Point.h"
#include "../../Loger/header/LogObservable.h"


class Field : public Observable, public LogObservable{

    int height;
    int width;
    int side_cell;
    std::vector<std::vector<Cell>> cells;
    Point player_pos;
    int count_part;
public:
    int getCountPart() const;
    void setCountPart(int countPart);

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
