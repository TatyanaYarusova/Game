#ifndef GAME_FILELOGGER_H
#define GAME_FILELOGGER_H


#include <iostream>
#include <fstream>
#include "ILogger.h"

class FileLogger : public ILogger {
private:
    std::ofstream file;
    std::string message;
public:
    FileLogger();
    FileLogger(const std::string& filename);
    void print(std::string &string) override;
    friend std::ostream& operator<<(std::ofstream& stream, FileLogger& obj);
    ~FileLogger();

};


#endif //GAME_FILELOGGER_H