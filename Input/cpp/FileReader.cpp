#include <iostream>
#include "../header/FileReader.h"

FileReader::FileReader(KeyboardReader* reader, const std::string& filename) {
    file.open(filename, std::ios_base::in);
    this->reader = reader;
    converter = new Converter;
}
void FileReader::createDefault() {
    this->commands.emplace("Right", sf::Keyboard::Right); // две одинаковые кнопки на разные команды
    this->commands.emplace("Left", sf::Keyboard::Left);
    this->commands.emplace("Up", sf::Keyboard::Up);
    this->commands.emplace("Down", sf::Keyboard::Down);
    this->commands.emplace("Save", sf::Keyboard::Num0);
    this->commands.emplace("Load", sf::Keyboard::Num1);
    reader->setCommands(commands);
//    this->commands.emplace("Quit", sf::Keyboard::Escape);
//    this->commands.emplaсe("Save", sf::Keyboard::F9);
}
void FileReader::read() {
    std::vector<std::string> values;
    if(file.is_open()){
        while(!file.eof()){
            getline(file, line);
            size_t pos_sep = line.find("=");
            if(pos_sep != std::string::npos) {
                key = line.substr(0, pos_sep - 1);
                value = line.substr(pos_sep + 2);
                auto value_in_dict = find(values.begin(), values.end(), value);
                if(value_in_dict == values.end()) {
                    auto key_in_dict = this->commands.find(key);
                    if (key_in_dict != this->commands.end()) {
                        this->commands[key] = this->converter->converting(value);
                    } else {
                        this->commands.emplace(key, this->converter->converting(value));
                    }
                    values.push_back(value);
                }
                else{
                    this->notify_log(LogMessage{value + " - this key is already in use. The default key was set.",Level::Error});
                }
            }
            else{
                this->notify_log(LogMessage{"Invalid input format. Default values have been set.",Level::Error});
            }
        }

        reader->setCommands(commands);
    }
    else{
        this->notify_log(LogMessage{"Unable to open the file. Default values have been set.",Level::Error});
    }

}

FileReader::~FileReader() {
    file.close();
    reader = nullptr;
    delete converter;
}



