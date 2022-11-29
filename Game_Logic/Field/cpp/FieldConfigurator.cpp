#include "../header/FieldConfigurator.h"
#include "../Strategy/header/Level_first.h"
#include "../Strategy/header/Level_second.h"
#include "../Strategy/header/Level_other.h"

#include "../../../Event/header/SunEvent.h"
#include "../../../Event/header/WellEvent.h"
#include "../../../Event/header/StormEvent.h"
#include "../../../Event/header/PlatfotmEvent.h"
#include "../../../Event/header/PartEvent.h"

void FieldConfigurator::set_strategy(IStrategy* strategy) {
     this->strategy = strategy;

}

void FieldConfigurator::set_level(int level) {
        this->level = level;
        switch (this->level) {
            case 1:
                set_strategy(new Level_first);
                break;

            case 2:
                set_strategy(new Level_second);
                break;

            default:
                set_strategy(new Level_other);
                break;
        }
}

void FieldConfigurator::set_scheme() {
    scheme = strategy->generate();
}

Field* FieldConfigurator::configurate(Player* player, Adapter* adapter, Win* win) {
    this->set_scheme();
    int size = scheme.scheme.size();
    this->map = new Field(size, size);
    auto sun = new SunEvent(player);
    auto well = new WellEvent(player);
    auto storm = new StormEvent(map);
    auto platform = new PlatformEvent(player);
    auto part = new PartEvent(player);


    for(int x = 0; x < size; x++){
        for(int y = 0; y < size; y ++){
            switch(scheme.scheme[y][x]){
                case Type::close:
                    this->map->getCell(y,x).setPassability(false);
                    break;
                case Type::sun:
                    this->map->getCell(y,x).setEvent(sun);
                    break;
                case Type::well:
                    this->map->getCell(y,x).setEvent(well);
                    break;
                case Type::storm:
                    this->map->getCell(y,x).setEvent(storm);
                    storm->setLogObaserver(adapter);
                    break;
                case Type::platform:
                    platform->setCount(scheme.count_part);
                    platform->setObserver(win);
                    platform->setLogObaserver(adapter);
                    this->map->getCell(y,x).setEvent(platform);
                    break;
                case Type::part:
                    part->setLogObaserver(adapter);
                    this->map->getCell(y,x).setEvent(part);
                    break;
                case Type::player:
                    this->map->setPlayerPos(y,x);
                    break;
                default:
                    break;


            }
        }
    }
    return map;
}
