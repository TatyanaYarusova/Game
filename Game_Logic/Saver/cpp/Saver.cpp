#include <fstream>
#include <sstream>
#include "../header/Saver.h"

PlayerInfo::operator std::string() const {
    return std::to_string(count_water) + " " + std::to_string(count_part);
}

GameInfo::operator std::string() const {
    return std::string(map) + "-\n" + std::string(player);
}

void Saver::save(GameInfo info) {
    std::ofstream file("/home/tatyana/CLionProjects/Game/Game_Logic/Saver/header/Save.txt");
    if (!file.is_open()) {
        throw SaverException("Unable to open file\n", ErrorType::file);
    }
    file << std::string(info) << '\n';
    auto hash = getHash(info);
    file << std::to_string(hash);
    file.close();
}

GameInfo Saver::load() {
    std::ifstream file("/home/tatyana/CLionProjects/Game/Game_Logic/Saver/header/Save.txt");
    if (!file.is_open()) {
        throw SaverException("Unable to open file\n", ErrorType::file);
    }
    std::vector<std::string> lines;
    std::string current_string;
    while (file >> current_string && current_string.find('-')) {
        lines.push_back(current_string);
    }
    std::string player_string;
    std::getline(file, current_string); // считываем ""
    std::getline(file, player_string); // считываем информацию про игрока
    std::getline(file, current_string); // считываем хеш файла
    file.close();
    GameInfo info;
    info.player = decPlayer(player_string);
    info.map = decField(lines);

    char* ptr;
    auto hash_read = strtoll(current_string.data(), &ptr, 10);
    auto hash = getHash(info);
    if (hash_read != hash) {
        throw SaverException("The file has been modified\n", ErrorType::hash);
    }

    return info;
}

PlayerInfo Saver::decPlayer(std::string string_info) {
    PlayerInfo info{};
    std::stringstream ss{string_info};
    if (!(ss >> info.count_water >> info.count_part)) {
        throw SaverException("Incorrect data. Unable to decoding.\n", ErrorType::player);
    }
    return info;
}

FieldScheme Saver::decField(std::vector<std::string> map_info) {
    FieldScheme info{};
    for (int i = 0; i < map_info.size() - 1; i++) {
        std::vector<Type> vec;
        for (auto& c: map_info[i]) {
            int a = c - '0';
            if (a < 0 || a > 7) {
                throw SaverException("Incorrect data. Unable to decoding.\n", ErrorType::field); // не соответствие ни одному элементу из enum
            }
            vec.push_back(Type(a));
        }
        info.scheme.push_back(vec);
    }
    char* ptr;
    info.count_part = strtol(map_info[map_info.size() - 1].data(), &ptr, 10); // конвертация строки в число
    return info;
}

int64_t Saver::getHash(GameInfo game_info) {
    int64_t hash = 5381;
    auto str = std::string(game_info);
    for (auto& c: str) {
        hash = (((hash << 5) + hash) + c) % INT64_MAX;
    }
    return hash;
}

const char* SaverException::what() const noexcept {
    return msg.data();
}

ErrorType SaverException::getType() const {
    return type;
}

SaverException::SaverException(std::string msg, ErrorType type) : msg(msg), type(type) {}
