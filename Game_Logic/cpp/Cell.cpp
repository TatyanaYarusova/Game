#include "../header/Cell.h"

Cell::Cell() : Cell(true, 0) {}

Cell::Cell(bool is_passable, int count) : is_passability(is_passable), count_sand(count) {}

void Cell::setPassability(bool pos) {
    this->is_passability = pos;
}

bool Cell::getPassability() {
    return this->is_passability;
}

int Cell::getCountSand() {
    return this->count_sand;
}

void Cell::setCountSand() {
    this->count_sand++;
}

void Cell::setEvent(IEvent* event) {
    this->event = event;

}

IEvent* Cell::getEvent() {
    return this->event;
}


