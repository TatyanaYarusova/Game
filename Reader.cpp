//
// Created by tatyana on 19.09.22.
//

#include "Reader.h"
#include <iostream>

void Reader::read() {
    std::cout<<"Введите параметры поля"<<"\n";
    std::cin>>this->height>>this->width;
    std::cout<<"Выберите роль:"<<"\n"<<"1-Археолог"<<"\n"<<"2-Скаут"<<"\n"<<"3-Хранитель воды"<<"\n";
    std::cin>>this->role;

}

int Reader::getRole() {
    return this->role;
}

int Reader::getWidth() {
    return this->width;
}

int Reader::getHeight() {
    return this->height;
}
