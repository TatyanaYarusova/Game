#ifndef GAME_LEVEL_OTHER_H
#define GAME_LEVEL_OTHER_H


#include "IStrategy.h"

class Level_other : public IStrategy {
    FieldScheme scheme;
    LevelGenerator<RulePlayerPosition<1>,
            RulePlatform<2>,
            RuleStorm<1, 3>,
            RulePart<2>,
            RuleWalls<5>,
            RuleSun<1>,
            RuleWell<1>
    > generator;
public:
    FieldScheme generate() override;
};


#endif //GAME_LEVEL_OTHER_H