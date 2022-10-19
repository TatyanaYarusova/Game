#include "../header/Observable.h"

void Observable::setObserver(Observer* observer) {
    this->observer = observer;
}

void Observable::notify() {
    this->observer->update();
}
