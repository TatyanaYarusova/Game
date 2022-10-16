cmake_minimum_required(VERSION 3.23)
project(Game)
find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)
set(CMAKE_CXX_STANDARD 14)

add_executable(Game Input/cpp/KeyboardReader.cpp Input/header/KeyboardReader.h Game_Logic/cpp/main.cpp Game_Logic/cpp/Field.cpp Game_Logic/cpp/Player.cpp Game_Logic/cpp/Cell.cpp Input/cpp/Reader.cpp Input/header/Reader.h Game_Logic/header/Field.h  Game_Logic/header/Player.h Game_Logic/header/Cell.h  Draw_SFML/cpp/DrawField.cpp Draw_SFML/cpp/Game.cpp Draw_SFML/cpp/DrawCell.cpp Draw_SFML/header/DrawField.h Draw_SFML/header/DrawCell.h  Draw_SFML/header/Game.h Input/cpp/InputMediator.cpp Input/header/InputMediator.h Input/header/InputMessage.h Input/cpp/PlayerController.cpp Input/header/PlayerController.h Point.h Input/header/IController.h Draw_SFML/cpp/DrawPlayer.cpp Draw_SFML/header/DrawPlayer.h Input/cpp/GameController.cpp Input/header/GameController.h Event/header/IEvent.h Event/cpp/EffectOnField.cpp Event/header/EffectOnField.h Event/cpp/EffectOnPlayer.cpp Event/header/EffectOnPlayer.h Event/cpp/WellEvent.cpp Event/header/WellEvent.h Event/cpp/SunEvent.cpp Event/header/SunEvent.h Event/cpp/PartEvent.cpp Event/header/PartEvent.h Event/cpp/StormEvent.cpp Event/header/StormEvent.h Event/cpp/PlatfotmEvent.cpp Event/header/PlatfotmEvent.h)

target_link_libraries(Game sfml-graphics sfml-audio)