#include "../header/Game.h"


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
    map = new Field(gameController.getWidth(), gameController.getHeight());

    Player player(gameController.getRole());

    //create Observer
    status_game = new Status_game(true);
    win = new Win(&player);
    gameover = new GameOver(&player);

    //Logger
    filelog = new FileLoger();
    console = new ConsoleLoger();
    adapter = new Adapter;
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
    storm = new StormEvent(map, &playerController);
    sun = new SunEvent(&player);
    well = new WellEvent(&player);
    part = new PartEvent(&player);
    platform = new PlatformEvent(&player);
    stormmove = new StormMoveEvent(map, &playerController);
    platform->setObserver(win);
    platform->setObserver(&logger);
    storm->setObserver(&logger);
    stormmove->setObserver(&logger);
    part->setObserver(&logger);
    map->getCell(3, 2).setEvent(sun);
    map->getCell(3, 3).setEvent(well);
    map->getCell(4, 5).setEvent(part);
    map->getCell(1, 6).setEvent(platform);
    map->getCell(1, 0).setEvent(storm);
    map->getCell(5, 1).setEvent(stormmove);

    sf::RenderWindow window(sf::VideoMode(1000, 1000), "Game");

    while (window.isOpen() and status_game->getValue()) {
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

Game::~Game() {
    delete map;
    delete status_game;
    delete win;
    delete gameover;
    delete filelog;
    delete console;
    delete adapter;
    delete storm;
    delete sun;
    delete well;
    delete part;
    delete platform;
    delete stormmove;

}


