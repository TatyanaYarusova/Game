#ifndef GAME_LOGGERCONTROLLER_H
#define GAME_LOGGERCONTROLLER_H


#include "IController.h"
#include "../../Loger/header/Adapter.h"

class LoggerController: public IController {
private:
    Adapter* adapter;
public:
    LoggerController(Adapter* adapter);
    void getProcess(const InputMessage &message) override;

};


#endif //GAME_LOGGERCONTROLLER_H