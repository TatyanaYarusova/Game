//
// Created by tatyana on 20.09.22.
//

#include "Play.h"
#include <SFML/Graphics.hpp>

void Play::play(sf::Event event, Field& map, Player& player) {
    if(event.type == sf::Event::KeyReleased) {

        if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) or (sf::Keyboard::isKeyPressed(sf::Keyboard::A))){
            map.moveLeft();
            player.move(map.getPlayer_pos_x(), map.getPlayer_pos_y());
            player.getPlayer()->setTextureRect(sf::IntRect(0, 120, 100, 100));
        }

        if((sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) or (sf::Keyboard::isKeyPressed(sf::Keyboard::D))){
            map.moveRight();
            player.move(map.getPlayer_pos_x(), map.getPlayer_pos_y());
            player.getPlayer()->setTextureRect(sf::IntRect(0, 205, 100, 100));

        } //первая координата Х положительна =>идём вправо
        if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) or (sf::Keyboard::isKeyPressed(sf::Keyboard::W))) {
            map.moveUp();
            player.move(map.getPlayer_pos_x(), map.getPlayer_pos_y());
            player.getPlayer()->setTextureRect(sf::IntRect(0, 300, 100, 100));
        } //вторая координата (У) отрицательна =>идём вверх (вспоминаем из предыдущих уроков почему именно вверх, а не вниз)
        if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) or (sf::Keyboard::isKeyPressed(sf::Keyboard::S))) {
            map.moveDown();
            player.getPlayer()->setTextureRect(sf::IntRect(0, 5, 100, 100));
            player.move(map.getPlayer_pos_x(), map.getPlayer_pos_y());
        } //вторая координата (У) положительна =>идём вниз (если не понятно почему именно вниз - смотрим предыдущие уроки)
    }

}
