#ifndef GAME_FILEREADER_H
#define GAME_FILEREADER_H


#include <fstream>
#include "KeyboardReader.h"
#include "Converter.h"
#include "../../Loger/header/LogObservable.h"


class FileReader: public LogObservable {
private:
    std::ifstream file;
    KeyboardReader* reader;
    Map commands;
    Converter* converter;
    std::string key;
    std::string value;
    std::string line;
public:
    FileReader(KeyboardReader* reader, const std::string& filename);
    void createDefault();
    void read();
    ~FileReader();

public:

};


#endif //GAME_FILEREADER_H