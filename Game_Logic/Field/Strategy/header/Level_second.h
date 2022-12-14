#ifndef GAME_LEVEL_SECOND_H
#define GAME_LEVEL_SECOND_H


#include "IStrategy.h"

class Level_second : public IStrategy{
private:
    FieldScheme scheme;
    LevelGenerator<RulePlayerPosition<1>,
            RulePlatform<3>,
            RuleWell<1>,
            RulePart<3>,
            RuleWalls<20>,
            RuleSun<6>,
            RuleStorm<5>
            > generator;
public:
    FieldScheme generate() override;
};


#endif //GAME_LEVEL_SECOND_H