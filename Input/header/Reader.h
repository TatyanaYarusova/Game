#ifndef UNTITLED_READER_H
#define UNTITLED_READER_H

#include "InputMediator.h"

class Reader {
    InputMediator* mediator;
public:
    void read();
    explicit Reader(InputMediator* mediator);
};


#endif //UNTITLED_READER_H
