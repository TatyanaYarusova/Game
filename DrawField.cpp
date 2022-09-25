//
// Created by tatyana on 18.09.22.
//

#include "DrawField.h"

void DrawField::draw(Field& map, sf::RenderWindow& window) {
    for(int i = 0; i < map.getHeight(); i++){
        for(int j = 0; j < map.getWidth(); j++){
            if (map.getCells()[i][j].getPossability()) {
                window.draw(map.getCells()[i][j].getCell());
            }
            else{
                window.draw(map.getCells()[i][j].getSprite());
            }
        }
    }

}
