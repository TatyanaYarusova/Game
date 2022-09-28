#include "../header/DrawField.h"

void DrawField::draw(Field& map, sf::RenderWindow& window) {
    for (int i = 0; i < map.getHeight(); i++) {
        for (int j = 0; j < map.getWidth(); j++) {
            auto cell = map.getCell(j, i);
            if (cell.getPassability()) {
                window.draw(drawCell.draw(j, i));
            } else {
                window.draw(drawCell.drawClose(j, i));
            }
        }
    }
    auto player_x = map.getPlayerPosX();
    auto player_y = map.getPlayerPosY();
    window.draw(drawCell.draw(player_x, player_y, true));
}
