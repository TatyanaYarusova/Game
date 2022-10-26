#include <iostream>
#include "../header/ConsoleLoger.h"

void ConsoleLoger::print(IMessage& message) {
    switch (message) {

    }
    std::cout<<message; // перегрузить оператор, тк пришла не строка

}
