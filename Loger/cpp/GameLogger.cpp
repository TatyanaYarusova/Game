#include "../header/GameLogger.h"

void GameLogger::update_logger(Message message, int value) {
    switch (message) {
        case Message::Water:
            string = "[GameLevel] You have [some] water\n" ;
            adapter->process(string);
            break;
        case Message::Part:
            string = "[GameLevel] You have [some] part\n" ;
            adapter->process(string);
            break;
        case Message::Platforma:
            string = "[GameLevel] You haven't some part\n" ;
            adapter->process(string);
            break;
        case Message::Storm:
            string = "[GameLevel] Cell[2][3] was locked!\n";
            adapter->process(string);
            break;
        case Message::MoveDown:
            string = "[GameLevel] Player has moved one cell DOWN!\n";
            adapter->process(string);
            break;
        case Message::MoveUp:
            string = "[GameLevel] Player has moved one cell UP!\n";
            adapter->process(string);
            break;
        case Message::MoveLeft:
            string = "[GameLevel] Player has moved one cell LEFT!\n";
            adapter->process(string);
            break;
        case Message::MoveRight:
            string = "[GameLevel] Player has moved one cell RIGHT!\n";
            adapter->process(string);
            break;
        case Message::MoveStorm:
            string = "[GameLevel] StormMoveEvent moved the player one cell DOWN!\n";
            adapter->process(string);
            break;
        case Message::CellClose:
            string = "[ErrorLevel] Cell is locked!\n";
            adapter->process(string);
            break;
        case Message::Win:
            string = "[StatusLevel] You are win!\n";
            adapter->process(string);
            break;
        case Message::Loss:
            string = "[StatusLevel] You are loss!\n";
            adapter->process(string);
            break;
            //case Message::Save:
            //case Message::Play:
        case Message::Error:
            string = "[ErrorLevel] Error\n";
            adapter->process(string);
            break;

    }

}

void GameLogger::update() {}
