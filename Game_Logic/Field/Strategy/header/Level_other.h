#ifndef GAME_LEVEL_OTHER_H
#define GAME_LEVEL_OTHER_H


#include "IStrategy.h"

class Level_other : public IStrategy {
    FieldScheme scheme;
    LevelGenerator<RuleSizeField<9, 9>,
            RulePlayerPosition<3, 3>,
            RuleWalls<5>,
            RuleSun<1>,
            RuleWell<1>,
            RuleStorm<1>
    > generator;
public:
    FieldScheme generate() override;
};


#endif //GAME_LEVEL_OTHER_H