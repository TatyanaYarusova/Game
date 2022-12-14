#include "../header/Game.h"
#include "../../Input/header/ReaderLogger.h"
#include "../../Input/header/LoggerController.h"
#include "../../Input/header/FileReader.h"

void Game::start() {
    //create mediator
    InputMediator mediator;
    KeyboardReader keyboardReader{&mediator};
    Reader reader{&mediator};
    ReaderLogger reader_logger{&mediator};

    //Logger
    filelog = new FileLogger();
    console = new ConsoleLogger();
    adapter = new Adapter;
    adapter->addLogers(console);
    adapter->addLogers(filelog);
    LoggerController log_control{adapter};
    mediator.addController(&log_control);
    reader_logger.readOption();
    reader.setLogObaserver(adapter);

    FileReader fileReader{&keyboardReader, "/home/tatyana/CLionProjects/Game/Game_Logic/cpp/Commands.txt"};
    fileReader.setLogObaserver(adapter);
    fileReader.createDefault();
    fileReader.read();

    // create GameController and add it in mediator
    GameController gameController(this);
    mediator.addController(&gameController);

    //reading
    reader.read();

    //create Field and create Player
    player = Player(gameController.getRole());
    configurator.set_level(gameController.getGameLevel());



    //create Observer
    status_game = new Status_game(true);
    win = new Win(&player);
    gameover = new GameOver(&player);


    player.setObserver(gameover);
    win->setObserver(status_game);
    win->setLogObaserver(adapter);
    gameover->setObserver(status_game);
    gameover->setLogObaserver(adapter);


    map = configurator.configurate(&player, adapter, win);
    //create playerController and add it in mediator
    playerController = new PlayerController{map, &player};
    mediator.addController(playerController);

    playerController->setLogObaserver(adapter);

    //create drawField
    DrawField draw_map;

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
    delete status_game;
    delete win;
    delete gameover;
    delete filelog;
    delete console;
    delete adapter;
}

void Game::load() {
    auto field = saver_manager.load(&player, adapter, win, &configurator);
    if (field == nullptr) {
        return;
    }
    delete map;
    map = field;
    playerController->changeMap(map);
}

void Game::save() {
    saver_manager.save(*map, player);
}


