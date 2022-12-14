#ifndef GAME_SAVERMANAGER_H
#define GAME_SAVERMANAGER_H


#include "Saver.h"
#include "../../header/Player.h"
#include "../../header/Field.h"
#include "../../../Loger/header/Adapter.h"
#include "../../header/Win.h"
#include "../../Field/header/FieldConfigurator.h"
#include "../../Field/header/FieldHelper.h"

class SaverManager {
private:
    Saver saver;
    FieldHelper helper;

public:
    void printError(SaverException& exception);
    void save(Field& field, Player& player);
    Field* load(Player* player, Adapter* adapter, Win* win, FieldConfigurator* configurator);
};


#endif //GAME_SAVERMANAGER_H