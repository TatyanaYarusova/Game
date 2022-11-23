#ifndef GAME_CONVERTER_H
#define GAME_CONVERTER_H

#include <map>
#include <SFML/Window/Keyboard.hpp>

typedef std::map<std::string, sf::Keyboard::Key> Dict;

class Converter {
private:
    Dict commands_dict;
public:
    Converter();
    sf::Keyboard::Key converting(std::string string);

};


#endif //GAME_CONVERTER_H