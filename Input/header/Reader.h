#ifndef UNTITLED_READER_H
#define UNTITLED_READER_H

#include "InputMediator.h"
#include "../../Loger/header/LogObservable.h"

class Reader : public LogObservable{
    InputMediator* mediator;
public:
    void read();
    explicit Reader(InputMediator* mediator);
};


#endif //UNTITLED_READER_H
