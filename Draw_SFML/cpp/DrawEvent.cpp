#include "../header/DrawEvent.h"

//sf::Sprite DrawEvent::drawStorm(int, int) {
//    std::string filename = "/home/tatyana/CLionProjects/Game/Image/";
//    sf::Image image_cell{};
//    image_cell.loadFromFile(filename);
//    texture_cell->loadFromImage(image_cell);
//    sprite_cell.setTexture(*texture_cell);
//    sprite_cell.setTextureRect(sf::IntRect(0, 0, cell_texture_size, cell_texture_size));
//    return sf::Sprite();
//}

sf::Sprite DrawEvent::drawSun(int x, int y) {
    std::string filename = "/home/tatyana/CLionProjects/Game/Image/Events/sun.png";
    sf::Image image_cell{};
    texture_cell = new sf::Texture;
    image_cell.loadFromFile(filename);
    texture_cell->loadFromImage(image_cell);
    sprite_cell.setTexture(*texture_cell);
    sprite_cell.setTextureRect(sf::IntRect(0, 0, cell_texture_size, cell_texture_size));
    sprite_cell.setPosition((float) (x * (cell_size + 5)), (float) (y * (cell_size + 5)));
    return sprite_cell;
}

sf::Sprite DrawEvent::drawWell(int x, int y) {
    std::string filename = "/home/tatyana/CLionProjects/Game/Image/Events/well.png";
    sf::Image image_cell{};
    texture_cell = new sf::Texture;
    image_cell.loadFromFile(filename);
    texture_cell->loadFromImage(image_cell);
    sprite_cell.setTexture(*texture_cell);
    sprite_cell.setTextureRect(sf::IntRect(6, 0, cell_texture_size, cell_texture_size));
    sprite_cell.setPosition((float) (x * (cell_size + 5)), (float) (y * (cell_size + 5)));
    return sprite_cell;
}

sf::Sprite DrawEvent::drawPlatform(int x, int y) {
    std::string filename = "/home/tatyana/CLionProjects/Game/Image/Events/platform.png";
    sf::Image image_cell{};
    texture_cell = new sf::Texture;
    image_cell.loadFromFile(filename);
    texture_cell->loadFromImage(image_cell);
    sprite_cell.setTexture(*texture_cell);
    sprite_cell.setTextureRect(sf::IntRect(0, 0, cell_texture_size, cell_texture_size));
    sprite_cell.setPosition((float) (x * (cell_size + 5)), (float) (y * (cell_size + 5)));
    return sprite_cell;
}

sf::Sprite DrawEvent::drawPart(int x, int y) {
    std::string filename = "/home/tatyana/CLionProjects/Game/Image/Events/part.png";
    sf::Image image_cell{};
    texture_cell = new sf::Texture;
    image_cell.loadFromFile(filename);
    texture_cell->loadFromImage(image_cell);
    sprite_cell.setTexture(*texture_cell);
    sprite_cell.setTextureRect(sf::IntRect(0, 0, cell_texture_size, cell_texture_size));
    sprite_cell.setPosition((float) (x * (cell_size + 5)), (float) (y * (cell_size + 5)));
    return sprite_cell;
}
