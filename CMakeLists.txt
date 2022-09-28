cmake_minimum_required(VERSION 3.23)
project(Game)
find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)
set(CMAKE_CXX_STANDARD 14)

add_executable(Game Controller.cpp Controller.h Play.cpp Play.h Event.cpp Event.h Mediator.cpp Mediator.h Event_play.cpp Event_play.h CommandReader.cpp CommandReader.h Game_Logic/cpp/main.cpp Game_Logic/cpp/Field.cpp Game_Logic/cpp/Player.cpp Game_Logic/cpp/Cell.cpp Game_Logic/cpp/Reader.cpp Game_Logic/header/Reader.h Game_Logic/header/Field.h  Game_Logic/header/Player.h Game_Logic/header/Cell.h  Draw_SFML/cpp/DrawField.cpp Draw_SFML/cpp/Game.cpp Draw_SFML/cpp/DrawCell.cpp Draw_SFML/header/DrawField.h Draw_SFML/header/DrawCell.h  Draw_SFML/header/Game.h)

target_link_libraries(Game sfml-graphics sfml-audio)