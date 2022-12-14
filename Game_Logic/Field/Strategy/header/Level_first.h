#ifndef GAME_LEVEL_FIRST_H
#define GAME_LEVEL_FIRST_H


#include "IStrategy.h"


class Level_first : public IStrategy{
private:
    FieldScheme scheme;
    LevelGenerator<RulePlayerPosition<1>,
                   RulePlatform<1>,
                   RuleSun<1>,
                   RulePart<1>,
                   RuleWalls<5>,
                   RuleWell<3>,
                   RuleStorm<4>
                   > generator;
public:
    FieldScheme generate() override;
};


#endif //GAME_LEVEL_FIRST_H