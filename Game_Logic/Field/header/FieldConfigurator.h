#ifndef GAME_FIELDCONFIGURATOR_H
#define GAME_FIELDCONFIGURATOR_H


#include "../Strategy/header/IStrategy.h"
#include "../../header/Field.h"
#include "../../header/Player.h"
#include "../../../Loger/header/Adapter.h"
#include "../../header/Win.h"
#include "../../../Event/header/SunEvent.h"
#include "../../../Event/header/WellEvent.h"
#include "../../../Event/header/StormEvent.h"
#include "../../../Event/header/PlatfotmEvent.h"
#include "../../../Event/header/PartEvent.h"

class FieldConfigurator {
private:
    int level;
    IStrategy* strategy;
    FieldScheme scheme;
    Field* map;
    StormEvent* storm;
    SunEvent* sun;
    WellEvent* well;
    PartEvent* part;
    PlatformEvent* platform;
public:
    void set_strategy(IStrategy* strategy);
    void set_level(int level);
    void set_scheme();
    Field* configurate(Player* player, Adapter* adapter, Win* win);
    Field* configurate(FieldScheme& scheme, Player* player, Adapter* adapter, Win* win);

    ~FieldConfigurator();
};


#endif //GAME_FIELDCONFIGURATOR_H