#include "../header/DrawCell.h"

DrawCell::DrawCell() : texture_cell(new sf::Texture) {
    std::string filename = "/home/tatyana/oop/game/map_1.png";
    sf::Image image_cell{};
    image_cell.loadFromFile(filename);
    texture_cell->loadFromImage(image_cell);
    sprite_cell.setTexture(*texture_cell);
    sprite_cell.setTextureRect(sf::IntRect(0, 0, cell_texture_size, cell_texture_size));

    cell.setSize(sf::Vector2f((float) cell_size, (float) cell_size));
    cell.setFillColor(sf::Color::Green);// поменять цвет
    cell.setOutlineThickness(5);
    cell.setOutlineColor(sf::Color::Black);
}

sf::RectangleShape DrawCell::draw(int x, int y, bool player) {
    cell.setFillColor(player ? sf::Color::Yellow : sf::Color::Green);
    cell.setPosition((float) (x * (cell_size + 5) ), (float) (y * (cell_size+5)));
    return cell;
}

sf::RectangleShape DrawCell::drawEvent(int x, int y){
    cell.setFillColor(sf::Color::Blue);
    cell.setPosition((float) (x * (cell_size + 5) ), (float) (y * (cell_size+5)));
    return cell;
}

sf::Sprite DrawCell::drawClose(int x, int y) {
    sprite_cell.setPosition((float) (x * (cell_size + 5)), (float) (y * (cell_size + 5)));
    return sprite_cell;
}
