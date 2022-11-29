#include "FieldConfigurator.h"
#include "../Strategy/header/Level_first.h"
#include "../Strategy/header/Level_second.h"
#include "../Strategy/header/Level_other.h"

void FieldConfigurator::set_strategy(IStrategy* strategy) {
     this->strategy = strategy;

}

void FieldConfigurator::set_level(GameLevel level) {
        this->level = level;
        switch (level) {
            case GameLevel::first:
                set_strategy(new Level_first);
                break;

            case GameLevel::second:
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

Field* FieldConfigurator::configurate() {
    this->set_scheme();
    int size = scheme.scheme.size();
    this->map = new Field(size, size);


    for(int x = 0; x < size; x++){
        for(int y = 0; y < size; y ++){
            switch(scheme.scheme[y][x]){
                case Type::close:
                    this->map->getCell(y,x).setPassability(false);
                    break;
                case Type::sun:
                    break;
                case Type::well:
                    break;
                case Type::storm:
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
