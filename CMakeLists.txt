cmake_minimum_required(VERSION 3.23)
project(untitled)
find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)
set(CMAKE_CXX_STANDARD 14)

add_executable(untitled main.cpp Event_play.cpp Event_play.h Field.cpp Field.h Player.cpp Player.h Cell.cpp Cell.h CommandReader.cpp CommandReader.h DrawCell.cpp DrawCell.h DrawField.cpp DrawField.h Controller.cpp Controller.h Game.cpp Game.h Reader.cpp Reader.h Play.cpp Play.h Event.cpp Event.h)
target_link_libraries(untitled sfml-graphics sfml-audio)