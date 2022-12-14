#ifndef GAME_SAVER_H
#define GAME_SAVER_H


#include <string>
#include <optional>
#include <exception>
#include "../../Field/header/FieldScheme.h"

struct PlayerInfo{
    int count_water;
    int count_part;
    explicit operator std::string() const;
};

struct GameInfo {
    FieldScheme map;
    PlayerInfo player;
    explicit operator std::string() const;
};

class SaverException : public std::exception {
public:
    enum ErrorType {
        file,
        field,
        player,
        hash
    };

    SaverException(std::string msg, ErrorType type);

    const char* what() const noexcept override;
    ErrorType getType() const;
private:
    std::string msg;
    ErrorType type;
};

class Saver {
private:
    int64_t getHash(GameInfo game_info);
public:
    void save(GameInfo info);
    GameInfo load();
    PlayerInfo decPlayer(std::string string_info);
    FieldScheme decField(std::vector<std::string> map_info);
};


#endif //GAME_SAVER_H