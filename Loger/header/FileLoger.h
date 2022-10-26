#ifndef GAME_FILELOGER_H
#define GAME_FILELOGER_H


#include <iostream>
#include <fstream>
#include "ILoger.h"

class FileLoger : public ILoger {
private:
    std::ofstream file;
    std::string message;
public:
    FileLoger();
    FileLoger(const std::string& filename);
    void print(std::string &string) override;
    //friend std::ostream& operator<<(std::ofstream stream, FileLoger obj);
    //~FileLoger();

};


#endif //GAME_FILELOGER_H