#ifndef GAME_SAVERMANAGER_H
#define GAME_SAVERMANAGER_H


#include "Saver.h"
#include "../../header/Player.h"
#include "../../header/Field.h"
#include "../../../Loger/header/Adapter.h"
#include "../../header/Win.h"
#include "../../Field/header/FieldConfigurator.h"

class SaverManager {
private:
    Saver saver;
    void printError(SaverException& exception);
public:
    void save(Field& field, Player& player);
    Field* load(Player* player, Adapter* adapter, Win* win, FieldConfigurator* configurator);
};


#endif //GAME_SAVERMANAGER_H