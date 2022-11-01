#include "../header/Reader.h"
#include <iostream>

void Reader::read() {
    std::cout<<"Введите параметры поля"<<"\n";
    int width;
    int height;
    std::cin>>height>>width;
    std::cout<<"Выберите роль:"<<"\n"<<"1-Археолог"<<"\n"<<"2-Скаут"<<"\n"<<"3-Хранитель воды"<<"\n";
    int role;
    std::cin>>role;
    if ((width != height) or (width % 2 == 0) or (width < 0 and height < 0)) {
        this->notify_log(LogMessage{"Error!", Level::Error});
    }
    mediator->onCommandProcessed(InputMessage{InputCommand::SetFieldWidth,width});
    mediator->onCommandProcessed(InputMessage{InputCommand::SetFieldHeight,height});
    mediator->onCommandProcessed(InputMessage{InputCommand::SetPlayerRole,role});

}

Reader::Reader(InputMediator* mediator): mediator(mediator) {}
