#ifndef UNTITLED_GAME_H
#define UNTITLED_GAME_H


#include "Player.h"
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
#include "../../Loger/header/FileLogger.h"
#include "../../Loger/header/ConsoleLogger.h"
#include "../../Loger/header/Adapter.h"
#include <SFML/Graphics.hpp>

class Game {
private:
    Field* map;
    Status_game* status_game;
    Win* win;
    GameOver* gameover;
    FileLogger* filelog;
    ConsoleLogger* console;
    Adapter* adapter;
    StormEvent* storm;
    SunEvent* sun;
    WellEvent* well;
    PartEvent* part;
    PlatformEvent* platform;
    StormMoveEvent* stormmove;
public:
    void start();
    ~Game();
};


#endif //UNTITLED_GAME_H
