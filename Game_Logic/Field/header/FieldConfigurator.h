#ifndef GAME_FIELDCONFIGURATOR_H
#define GAME_FIELDCONFIGURATOR_H


#include "../Strategy/header/IStrategy.h"
#include "../../header/Field.h"

class FieldConfigurator {
private:
    GameLevel level;
    IStrategy* strategy;
    FieldScheme scheme;
    Field* map;
public:
    void set_strategy(IStrategy* strategy);
    void set_level(GameLevel level);
    void set_scheme();
    Field* configurate();
};


#endif //GAME_FIELDCONFIGURATOR_H