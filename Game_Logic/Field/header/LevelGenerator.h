#ifndef GAME_LEVELGENERATOR_H
#define GAME_LEVELGENERATOR_H

#include "FieldScheme.h"

template<typename ... Rules>
class LevelGenerator {
private:
    template<typename Rule>
    void applyRule(FieldScheme& fieldScheme) {
        Rule rule;
        rule.update(fieldScheme);
    }
public:
    FieldScheme generate(FieldScheme& fieldScheme){
        //FieldScheme fieldScheme;
        (applyRule<Rules>(fieldScheme), ...);
        return fieldScheme;
    };

};




#endif //GAME_LEVELGENERATOR_H