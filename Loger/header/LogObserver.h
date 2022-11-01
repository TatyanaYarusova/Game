#ifndef GAME_LOGOBSERVER_H
#define GAME_LOGOBSERVER_H


#include "LogMessage.h"

class LogObserver {
public:
    virtual void getLog(LogMessage message) = 0;
};


#endif //GAME_LOGOBSERVER_H