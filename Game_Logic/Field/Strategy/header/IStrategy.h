#ifndef GAME_ISTRATEGY_H
#define GAME_ISTRATEGY_H

#include "../../Rules/header/RuleSizeField.h"
#include "../../Rules/header/RulePlayerPosition.h"
#include "../../Rules/header/RuleWalls.h"
#include "../../Rules/header/RuleSun.h"
#include "../../Rules/header/RuleWell.h"
#include "../../Rules/header/RuleStorm.h"
#include "../../header/LevelGenerator.h"

class IStrategy {
public:
    virtual FieldScheme generate() = 0;
};

#endif //GAME_ISTRATEGY_H

