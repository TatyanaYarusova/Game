#include "../header/Field.h"
#include <iostream>

Field::Field() : Field(7, 7) {}

Field::Field(int height, int width) {
    if ((width != height) or (width % 2 == 0)) {
        std::cout << "Ошибка!";
        exit(0); // предложить переввести данные(Реализовать позже)
    }

    player_pos.x = 0;
    player_pos.y = 0;
    this->side_cell = 100;
    this->height = height;
    this->width = width;

    this->cells.resize(height);
    for (int m = 0; m < height; m++) {
        this->cells[m].resize(width);
    }

    this->cells[2][2].setPassability(false); // Закрываю клетки
    this->cells[1][3].setPassability(false);
    this->cells[4][4].setPassability(false);
    //this->cells[5][1].setPassability(false);
    //this->cells[6][6].setPassability(false);
}

Field::Field(const Field& other) : height(other.height), width(other.width), side_cell(other.side_cell),
                                   player_pos(other.player_pos),cells(other.cells) {}

Field& Field::operator=(const Field& field) {
    if (this != &field) {
        width = field.width;
        height = field.height;
        side_cell = field.side_cell;
        player_pos = field.player_pos;
        height = field.height;
        cells = field.cells;
    }
    return *this;
}

Field::Field(Field&& other) noexcept: width(other.width), side_cell(other.side_cell), height(other.height),
                                      player_pos(other.player_pos),cells(std::move(other.cells)) {
    other.width = 0;
    other.height = 0;
    other.side_cell = 0;
    other.player_pos.x = 0;
    other.player_pos.y = 0;
}

Field& Field::operator=(Field&& field) noexcept {
    if (this != &field) {
        Field temp{std::move(field)};
        std::swap(cells, temp.cells);
        std::swap(width, temp.width);
        std::swap(height, temp.height);
        std::swap(cells, temp.cells);
        std::swap(player_pos, temp.player_pos);
    }
    return *this;
}

int Field::getHeight() const {
    return this->height;
}

int Field::getWidth() const {
    return this->width;
}

Cell Field::getCell(int x, int y) {
    if (x < 0 && x >= width && y < 0 && y >= height)
        return Cell{};
    return cells[y][x];
}

Point Field::getPlayerPos() const {
    return player_pos;
}

void Field::setPlayerPos(int x, int y) {
    player_pos.x = x;
    player_pos.y = y;
}
