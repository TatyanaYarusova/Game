#include <iostream>
#include "../header/FileReader.h"

FileReader::FileReader(KeyboardReader* reader, const std::string& filename) {
    file.open(filename, std::ios_base::in);
    this->reader = reader;
    converter = new Converter;
}
void FileReader::createDefault() {
    this->commands.emplace("Right", sf::Keyboard::Right);
    this->commands.emplace("Left", sf::Keyboard::Left);
    this->commands.emplace("Up", sf::Keyboard::Up);
    this->commands.emplace("Down", sf::Keyboard::Down);
    reader->setCommands(commands);
//    this->commands.emplace("Quit", sf::Keyboard::Escape);
//    this->commands.emplase("Save", sf::Keyboard::F9);
}
void FileReader::read() {
    if(file.is_open()){
        while(!file.eof()){
            getline(file, line);
            size_t pos_sep = line.find("=");
            key = line.substr(0, pos_sep - 1);
            value = line.substr(pos_sep + 2);
            auto key_in_dict = this->commands.find(key);
            if (key_in_dict != this->commands.end()){
                this->commands[key] = this->converter->converting(value);
            }
            else{
                this->commands.emplace(key, this->converter->converting(value));
            }
        }

        reader->setCommands(commands);
    }

}

FileReader::~FileReader() {
    file.close();
    reader = nullptr;
    delete converter;
}



