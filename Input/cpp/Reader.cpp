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
    mediator->onCommandProcessed(InputMessage{InputCommand::SetFieldWidth,width});
    mediator->onCommandProcessed(InputMessage{InputCommand::SetFieldHeight,height});
    mediator->onCommandProcessed(InputMessage{InputCommand::SetPlayerRole,role});

}

Reader::Reader(InputMediator* mediator): mediator(mediator) {}
