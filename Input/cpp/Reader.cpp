#include "../header/Reader.h"
#include <iostream>

void Reader::read() {
    std::cout<<"Введите уровень игры"<<"\n"<<"1 - Первый уровень"<<"\n"<<"2 - Второй уровень"<<"\n";
    int level;
    std::cin>>level;
    std::cout<<"Выберите роль:"<<"\n"<<"1-Археолог"<<"\n"<<"2-Скаут"<<"\n"<<"3-Хранитель воды"<<"\n";
    int role;
    std::cin>>role;
    mediator->onCommandProcessed(InputMessage{InputCommand::SetGameLevel,level});
    mediator->onCommandProcessed(InputMessage{InputCommand::SetPlayerRole,role});

}

Reader::Reader(InputMediator* mediator): mediator(mediator) {}
