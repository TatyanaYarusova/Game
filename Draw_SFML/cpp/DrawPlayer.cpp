#include <string>
#include <SFML/Graphics/Image.hpp>
#include <SFML/Graphics/Texture.hpp>
#include "../header/DrawPlayer.h"

DrawPlayer::DrawPlayer() {
    int height = 100;
    int width = 100;
    std::string Filename = "/home/tatyana/oop/game/hero.png";
    sf::Image heroim;
    heroim.loadFromFile(Filename);
    sf::Texture herotex;
    herotex.loadFromImage(heroim);
    herosprite = new sf::Sprite;
    herosprite->setTexture(herotex);
    herosprite->setTextureRect(sf::IntRect(0, 5, height, width));
    herosprite->setPosition(0, 0);

}

sf::Sprite* DrawPlayer::getSprite(int x, int y) {
    herosprite->setPosition(x * 100, y * 100);
    return herosprite;
}
