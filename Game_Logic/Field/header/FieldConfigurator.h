#ifndef GAME_FIELDCONFIGURATOR_H
#define GAME_FIELDCONFIGURATOR_H


#include "../Strategy/header/IStrategy.h"
#include "../../header/Field.h"
#include "../../header/Player.h"
#include "../../../Loger/header/Adapter.h"
#include "../../header/Win.h"

class FieldConfigurator {
private:
    int level;
    IStrategy* strategy;
    FieldScheme scheme;
    Field* map;
public:
    void set_strategy(IStrategy* strategy);
    void set_level(int level);
    void set_scheme();
    Field* configurate(Player* player, Adapter* adapter, Win* win);
};


#endif //GAME_FIELDCONFIGURATOR_H