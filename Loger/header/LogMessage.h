#ifndef GAME_LOGMESSAGE_H
#define GAME_LOGMESSAGE_H

#include <string>
#include "Enum.h"

struct LogMessage{
    std::string message;
    Level level;
    int value = -1;
};
#endif //GAME_LOGMESSAGE_H