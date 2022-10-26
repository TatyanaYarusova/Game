#include "../header/Game.h"
#include "../../Input/header/Reader.h"
#include "../../Input/header/KeyboardReader.h"
#include "../../Draw_SFML/header/DrawField.h"
#include "../../Input/header/PlayerController.h"
#include "../../Input/header/GameController.h"
#include "../../Event/header/StormEvent.h"
#include "../../Event/header/SunEvent.h"
#include "../../Event/header/WellEvent.h"
#include "../../Event/header/PartEvent.h"
#include "../../Event/header/PlatfotmEvent.h"
#include "../header/Status_game.h"
#include "../header/Win.h"
#include "../header/GameOver.h"
#include "../../Event/header/StormMoveEvent.h"
#include "../../Loger/header/GameLogger.h"
#include "../../Loger/header/FileLoger.h"
#include "../../Loger/header/ConsoleLoger.h"
#include <SFML/Graphics.hpp>

void Game::start() {
    //create mediator
    InputMediator mediator;
    KeyboardReader keyboardReader{&mediator};
    Reader reader{&mediator};

    // create GameController and add it in mediator
    GameController gameController;
    mediator.addController(&gameController);

    //reading
    reader.read();

    //create Field and create Player
    Field* map = new Field (gameController.getWidth(), gameController.getHeight());

    Player player(gameController.getRole());

    //create Observer
    auto* status_game = new Status_game(true);
    auto* win = new Win(&player);
    auto* gameover = new GameOver(&player);

    //Logger
    auto* filelog = new FileLoger();
    auto* console = new ConsoleLoger();
    auto* adapter = new Adapter;
    adapter->addLogers(console);
    adapter->addLogers(filelog);

    GameLogger logger(adapter);
    player.setObserver(gameover);
    map->setObserver(&logger);
    win->setObserver(status_game);
    win->setObserver(&logger);
    gameover->setObserver(status_game);
    gameover->setObserver(&logger);



    //create playerController and add it in mediator
    PlayerController playerController{map, &player};
    mediator.addController(&playerController);

    playerController.setObserver(&logger);

    //create drawField
    DrawField draw_map;

    //create event
    auto* storm = new StormEvent(map, &playerController);
    auto* sun = new SunEvent(&player);
    auto* well = new WellEvent(&player);
    auto* part = new PartEvent(&player);
    auto* platform = new PlatformEvent(&player);
    auto* stormmove = new StormMoveEvent(map, &playerController);
    platform->setObserver(win);
    platform->setObserver(&logger);
    storm->setObserver(&logger);
    stormmove->setObserver(&logger);
    part->setObserver(&logger);
    map->getCell(3,2).setEvent(sun);
    map->getCell(3, 3).setEvent(well);
    map->getCell(4,5).setEvent(part);
    map->getCell(1,6).setEvent(platform);
    map->getCell(1,0).setEvent(storm);
    map->getCell(5,1).setEvent(stormmove);

    sf::RenderWindow window(sf::VideoMode(1000, 1000), "Game");

    while (window.isOpen() and status_game->getValue()){
        sf::Event event{};
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        // drawing map
        draw_map.draw(*map, window);

        window.display();
        //reading keyboard-event
        keyboardReader.process(event);

    }
    window.close();

}

