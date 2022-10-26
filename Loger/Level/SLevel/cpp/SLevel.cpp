#include "../header/SLevel.h"

void SLevel::play() {
    current_state->play(this);

}

void SLevel::save() {
    current_state->save(this);
}

void SLevel::win() {
    current_state->win(this);
}

void SLevel::loss() {
    current_state->loss(this);
}

void SLevel::changeState(IState* state) {
    current_state = state;
}


