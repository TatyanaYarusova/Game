#include "../header/SaverManager.h"
#include "../../Field/header/FieldHelper.h"

void SaverManager::save(Field& field, Player& player) {
    std::vector<std::vector<Type>> cell_data;
    cell_data.resize(field.getHeight());
    for (int i = 0; i < field.getHeight(); i++) {
        cell_data[i].resize(field.getWidth());
    }

    for (int i = 0; i < field.getHeight(); i++) {
        for (int j = 0; j < field.getWidth(); j++) {
            cell_data[i][j] = FieldHelper::getType(field.getCell(j, i));
        }
    }

    cell_data[field.getPlayerPos().y][field.getPlayerPos().x] = Type::player;

    FieldScheme scheme{cell_data, field.getCountPart()};
    PlayerInfo player_info{};
    player_info.count_part = player.getCountPart();
    player_info.count_water = player.getWater();
    GameInfo game_info{scheme, player_info};
    try {
        saver.save(game_info);
    } catch (SaverException& e) {
        printError(e);
    }
}

Field* SaverManager::load(Player* player, Adapter* adapter, Win* win, FieldConfigurator* configurator) {
    GameInfo game_info;
    try {
        game_info = saver.load();
    } catch (SaverException& e) {
        printError(e);
        return nullptr;
    }
    auto* field = configurator->configurate(game_info.map, player, adapter, win);
    player->setCountPart(game_info.player.count_part);
    player->setWater(game_info.player.count_water);
    return field;
}

void SaverManager::printError(SaverException& e) {
    switch (e.getType()) {
        case SaverException::file:
            std::cout << "The exception is caused by an error in the data associated with FILE:";
            break;
        case SaverException::field:
            std::cout << "The exception is caused by an error in the data associated with FIELD:";
            break;
        case SaverException::player:
            std::cout << "The exception is caused by an error in the data associated with PLAYER:";
            break;
        case SaverException::hash:
            std::cout << "The exception is caused by an error in the data associated with HASH:";
            break;
    }
    std::cout << e.what();
}
