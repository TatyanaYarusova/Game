#ifndef GAME_LOGOBSERVABLE_H
#define GAME_LOGOBSERVABLE_H


#include "LogObserver.h"

class LogObservable {
private:
    LogObserver* observer = nullptr;
public:
    void notify_log(LogMessage message);
    void setLogObaserver(LogObserver* observer);
};


#endif //GAME_LOGOBSERVABLE_H