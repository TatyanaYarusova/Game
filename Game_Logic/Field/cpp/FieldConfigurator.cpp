#include "../header/FieldConfigurator.h"
#include "../Strategy/header/Level_first.h"
#include "../Strategy/header/Level_second.h"
#include "../Strategy/header/Level_other.h"



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
    return configurate(scheme, player, adapter, win);
}

FieldConfigurator::~FieldConfigurator() {
    delete sun;
    delete well;
    delete storm;
    delete platform;
    delete part;
    delete map;
    delete strategy;
}

Field* FieldConfigurator::configurate(FieldScheme& f_scheme, Player* player, Adapter* adapter, Win* win) {
    int size = f_scheme.scheme.size();
    this->map = new Field(size, size);
    sun = new SunEvent(player);
    well = new WellEvent(player);
    storm = new StormEvent(map);
    platform = new PlatformEvent(player);
    part = new PartEvent(player);
    map->setCountPart(f_scheme.count_part);

    for(int x = 0; x < size; x++){
        for(int y = 0; y < size; y ++){
            switch(f_scheme.scheme[y][x]){
                case Type::close:
                    this->map->getCell(x, y).setPassability(false);
                    break;
                case Type::sun:
                    this->map->getCell(x, y).setEvent(sun);
                    break;
                case Type::well:
                    this->map->getCell(x, y).setEvent(well);
                    break;
                case Type::storm:
                    this->map->getCell(x, y).setEvent(storm);
                    storm->setLogObaserver(adapter);
                    break;
                case Type::platform:
                    platform->setCount(f_scheme.count_part);
                    platform->setObserver(win);
                    platform->setLogObaserver(adapter);
                    this->map->getCell(x, y).setEvent(platform);
                    break;
                case Type::part:
                    part->setLogObaserver(adapter);
                    this->map->getCell(x, y).setEvent(part);
                    break;
                case Type::player:
                    this->map->setPlayerPos(x, y);
                    break;
                default:
                    break;


            }
        }
    }
    return map;
}