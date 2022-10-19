#include "../header/DrawField.h"

void DrawField::draw(Field& map, sf::RenderWindow& window) {
    for (int i = 0; i < map.getHeight(); i++) {
        for (int j = 0; j < map.getWidth(); j++) {
            auto cell = map.getCell(j, i);
            if (cell.getPassability()) {
                if(cell.getEvent()){
                    window.draw(drawCell.drawEvent(j,i));
                    //draw Events
                    //window.draw(drawEvent.drawPart(4, 5));
                    //window.draw(drawEvent.drawSun(3, 2));
                    //window.draw(drawEvent.drawWell(3, 3));
                    //window.draw(drawEvent.drawPlatform(1, 6));


                }
                else {
                    window.draw(drawCell.draw(j, i));
                }
            } else {
                window.draw(drawCell.drawClose(j, i));
            }
        }
    }




    auto player_x = map.getPlayerPos().x;
    auto player_y = map.getPlayerPos().y;
    window.draw(drawCell.draw(player_x, player_y, true));
    window.draw(*drawPlayer.getSprite(player_x, player_y));

}
