#include "../header/LogObservable.h"

void LogObservable::notify_log(LogMessage message) {
    this->observer->getLog(message);

}

void LogObservable::setLogObaserver(LogObserver* observer) {
    this->observer = observer;

}
