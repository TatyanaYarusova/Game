#include "DrawCell.h"

DrawCell::DrawCell() : texture_cell(new sf::Texture) {
    std::string filename = "/home/tatyana/oop/game/map_2.png";
    sf::Image image_cell{};
    image_cell.loadFromFile(filename);
    texture_cell->loadFromImage(image_cell);

    cell.setSize(sf::Vector2f((float) cell_size, (float) cell_size));
    cell.setFillColor(sf::Color::Green);// поменять цвет
    cell.setOutlineThickness(5);
    cell.setOutlineColor(sf::Color::Black);

    sprite_cell.setTexture(*texture_cell);
    sprite_cell.setTextureRect(sf::IntRect(0, 0, cell_texture_size, cell_texture_size));
}

sf::RectangleShape DrawCell::draw(int x, int y, bool player) {
    cell.setFillColor(player ? sf::Color::Yellow : sf::Color::Green);
    cell.setPosition((float) (x * cell_size), (float) (y * cell_size));
    return cell;
}

sf::Sprite DrawCell::drawClose(int x, int y) {
    sprite_cell.setPosition((float) (x * cell_size), (float) (y * cell_size));
    return sprite_cell;
}
