#include "../header/Field.h"
#include <iostream>

Field::Field() : Field(7, 7) {}

Field::Field(int height, int width) {
    if ((width != height) or (width % 2 == 0)) {
        std::cout << "Ошибка!";
        exit(0); // предложить переввести данные(Реализовать позже)
    }

    this->player_pos_x = 0;
    this->player_pos_y = 0;
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
    this->cells[5][1].setPassability(false);
    this->cells[6][6].setPassability(false);
}

Field::Field(const Field& other) : height(other.height), width(other.width), side_cell(other.side_cell),
                                   player_pos_x(other.player_pos_x), player_pos_y(other.player_pos_y),
                                   cells(other.cells) {}

Field& Field::operator=(const Field& field) {
    if (this != &field) {
        width = field.width;
        height = field.height;
        side_cell = field.side_cell;
        player_pos_x = field.player_pos_x;
        player_pos_y = field.player_pos_y;
        height = field.height;
        cells = field.cells;
    }
    return *this;
}

Field::Field(Field&& other) noexcept: width(other.width), side_cell(other.side_cell), height(other.height),
                                      player_pos_y(other.player_pos_y), player_pos_x(other.player_pos_x),
                                      cells(std::move(other.cells)) {
    other.width = 0;
    other.height = 0;
    other.side_cell = 0;
    other.player_pos_x = 0;
    other.player_pos_y = 0;
}

Field& Field::operator=(Field&& field) noexcept {
    if (this != &field) {
        Field temp{std::move(field)};
        std::swap(cells, temp.cells);
        std::swap(width, temp.width);
        std::swap(height, temp.height);
        std::swap(cells, temp.cells);
        std::swap(player_pos_x, temp.player_pos_x);
        std::swap(player_pos_y, temp.player_pos_y);
    }
    return *this;
}

int Field::getHeight() const {
    return this->height;
}

int Field::getWidth() const {
    return this->width;
}

// TODO: extract move logic to separate controller

void Field::moveLeft() {
    if (this->cells[this->player_pos_y][(this->player_pos_x - 1 + this->width) % this->width].getPassability()) {
        this->player_pos_x = (this->player_pos_x - 1 + this->width) % this->width;
    }
}

void Field::moveRight() {
    if (this->cells[this->player_pos_y][(this->player_pos_x + 1) % this->width].getPassability()) {
        this->player_pos_x = (this->player_pos_x + 1) % this->width;
    }
}

void Field::moveUp() {
    if (this->cells[(this->player_pos_y - 1 + this->height) % this->height][this->player_pos_x].getPassability()) {
        this->player_pos_y = (this->player_pos_y - 1 + this->height) % this->height;
    }
}

void Field::moveDown() {
    if (this->cells[(this->player_pos_y + 1) % this->height][this->player_pos_x].getPassability()) {
        this->player_pos_y = (this->player_pos_y + 1) % this->height;
    }
}

int Field::getPlayerPosX() const {
    return this->player_pos_x;
}

int Field::getPlayerPosY() const {
    return this->player_pos_y;
}

Cell Field::getCell(int x, int y) {
    if (x < 0 && x >= width && y < 0 && y >= height)
        return Cell{};
    return cells[y][x];
}
