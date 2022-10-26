#include "../header/Observable.h"

void Observable::setObserver(Observer* observer) {
    observers.push_back(observer);
}

void Observable::notify() {
    for(auto observer : observers) {
        observer->update();
    }
}

void Observable::notify_logger(Message message, int value) {

    for (auto observer: observers) {
        observer->update_logger(message, value);

    }
}