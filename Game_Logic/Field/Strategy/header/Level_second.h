#ifndef GAME_LEVEL_SECOND_H
#define GAME_LEVEL_SECOND_H


#include "IStrategy.h"

class Level_second : public IStrategy{
private:
    FieldScheme scheme;
    LevelGenerator<RuleSizeField<10, 10>,
            RulePlayerPosition<5, 5>,
            RuleWalls<20>,
            RuleSun<3>,
            RuleWell<1>,
            RuleStorm<5>
    > generator;
public:
    FieldScheme generate() override;
};


#endif //GAME_LEVEL_SECOND_H