//
// Created by tatyana on 17.09.22.
//

#include "Field.h"
#include <iostream>

Field::Field(){
    this->height = 5;
    this->width = 5;
    this->side_cell = 100;


    for(int m = 0; m < height; m++){
        this->cells.push_back(std::vector<Cell>());
        for(int n = 0; n < width; n++){
            this->cells[m].push_back(Cell(n * this->side_cell, m * this->side_cell, true, 0));
        }
    }
    this->cells[2][2].setPossability(false); // Закрываю клетки
    this->cells[1][3].setPossability(false);
    this->cells[4][4].setPossability(false);
}

Field::Field(int height, int width) {

    if ((width != height) or (width % 2 == 0)) {
        std::cout << "Ошибка!";
        exit(0); // предложить переввести данные(Реализовать позже)
    }

        this->Player_pos_x = 0;
        this->Player_pos_y = 0;
        this->side_cell = 100;
        this->height = height;
        this->width = width;


        for (int m = 0; m < height; m++) {
            this->cells.push_back(std::vector<Cell>());
            for (int n = 0; n < width; n++) {
                this->cells[m].push_back(Cell(n * this->side_cell, m * this->side_cell, true, 0));
            }
        }
        this->cells[2][2].setPossability(false); // Закрываю клетки
        this->cells[1][3].setPossability(false);
        this->cells[4][4].setPossability(false);
        this->cells[5][1].setPossability(false);
        this->cells[6][6].setPossability(false);


}
Field::Field(Field& other):height(other.height),width(other.width),side_cell(other.side_cell),Player_pos_x(other.Player_pos_x),Player_pos_y(other.Player_pos_y){
    for (int i=0;i<height;i++) {
        std::vector <Cell> string_cells;
        for (int j = 0; j < width; j++) {
            string_cells.push_back(other.cells[i][j]);
        }
        cells.push_back(string_cells);
    }
}
Field&Field::operator=(const Field &field){
    if (this!=&field) {
        for (int i = 0; i < height; i++)
            cells[i].clear();
        cells.clear();
        width= field.width;
        height=field.height;
        side_cell=field.side_cell;
        Player_pos_x=field.Player_pos_x;
        Player_pos_y=field.Player_pos_y;
        height = field.height;
        for (int i = 0; i < field.height; i++)
            for (int j = 0; j < field.width;j++)
                cells[i][j] = field.cells[i][j];
    }
    return *this;
}
Field::Field(Field&& other){
    std::swap(width,other.width);
    std::swap(side_cell,other.side_cell);
    std::swap(height,other.height);
    std::swap(Player_pos_y,other.Player_pos_y);
    std::swap(Player_pos_x,other.Player_pos_x);
    std::swap(cells,other.cells);
}
Field& Field:: operator=(Field&& field){
    if (this!=&field) {
        std::swap(cells, field.cells);
        std::swap(width, field.width);
        std::swap(height, field.height);
        std::swap(cells,field.cells);
        std::swap(Player_pos_x,field.Player_pos_x);
        std::swap(Player_pos_y,field.Player_pos_y);
    }
    return *this;
}

std::vector<std::vector<Cell>> &Field::getCells() {
    return cells;
}

int Field::getHeight(){
    return this->height;
}
int Field::getWidth(){
    return this->width;
}
void Field::move(int dx, int dy){
    this->cells[Player_pos_y][Player_pos_x].Color_update_2();
    if(dy == 0) {
        if (this->Player_pos_x + dx < 0) {
            if (this->cells[this->Player_pos_y][this->width - 1].getPossability()) {
                this->Player_pos_x = this->width - 1;
            }
        }
        else{
            if(this->cells[this->Player_pos_y][(this->Player_pos_x + dx) % this->width].getPossability()){
                this->Player_pos_x = (this->Player_pos_x + dx) % this->width;
            }
        }
    }
    else{
        if (this->Player_pos_y + dy < 0) {
            if (this->cells[this->height-1][this->Player_pos_x].getPossability()) {
                this->Player_pos_y = this->height - 1;
            }
        }
        else{
            if(this->cells[(this->Player_pos_y + dy) % this->height][this->Player_pos_x].getPossability()){
                this->Player_pos_y = (this->Player_pos_y + dy) % this->height;
            }
        }

    }
    this->cells[Player_pos_y][Player_pos_x].Color_update();
}
int Field::getPlayer_pos_x() {
    return this->Player_pos_x;
}
int Field::getPlayer_pos_y() {
    return this->Player_pos_y;
}