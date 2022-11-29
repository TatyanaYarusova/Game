#ifndef GAME_LEVEL_FIRST_H
#define GAME_LEVEL_FIRST_H


#include "IStrategy.h"


class Level_first : public IStrategy{
private:
    FieldScheme scheme;
    LevelGenerator<RuleSizeField<7,7>,
                   RulePlayerPosition<0, 0>,
                   RulePlatform<1, 5, 5>,
                   RulePart<3>,
                   RuleWalls<10>,
                   RuleSun<1>,
                   RuleWell<2>,
                   RuleStorm<3>
                   > generator;
public:
    FieldScheme generate() override;
};


#endif //GAME_LEVEL_FIRST_H