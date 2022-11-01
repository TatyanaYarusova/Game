#include <iostream>
#include "../header/ReaderLogger.h"

ReaderLogger::ReaderLogger(InputMediator* mediator) {
    this->mediator = mediator;
}

void ReaderLogger::readOption() {
    std::cout<<"Введите уровень отслеживания: "<<"\n"; // 1 -, 2- , 3- ,
    std::cout<<"1 - ErrorLevel."<<"\n";
    std::cout<<"2 - StatuLevel."<<"\n";
    std::cout<<"3 - GameLevel."<<"\n";
    int level;
    std::cin>>level;
    std::cout<<"Введите способ вывода информации:"<<"\n";
    std::cout<<"1 - Вывод в консоль."<<"\n";
    std::cout<<"2 - Вывод в файл."<<"\n";
    std::cout<<"3 - Вывод в консоль и в файл."<<"\n";
    int opt;
    std::cin>>opt;

    mediator->onCommandProcessed(InputMessage{InputCommand::SetOption,opt});
    mediator->onCommandProcessed(InputMessage{InputCommand::SetLevel,level});
}
