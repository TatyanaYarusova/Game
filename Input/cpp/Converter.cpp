#include "../header/Converter.h"

Converter::Converter() {
    this->commands_dict.emplace("Q", sf::Keyboard::Q);
    this->commands_dict.emplace("W", sf::Keyboard::W);
    this->commands_dict.emplace("E", sf::Keyboard::E);
    this->commands_dict.emplace("R", sf::Keyboard::R);
    this->commands_dict.emplace("T", sf::Keyboard::T);
    this->commands_dict.emplace("Y", sf::Keyboard::Y);
    this->commands_dict.emplace("U", sf::Keyboard::U);
    this->commands_dict.emplace("I", sf::Keyboard::I);
    this->commands_dict.emplace("O", sf::Keyboard::O);
    this->commands_dict.emplace("P", sf::Keyboard::P);
    //second line
    this->commands_dict.emplace("A", sf::Keyboard::A);
    this->commands_dict.emplace("S", sf::Keyboard::S);
    this->commands_dict.emplace("D", sf::Keyboard::D);
    this->commands_dict.emplace("F", sf::Keyboard::F);
    this->commands_dict.emplace("G", sf::Keyboard::G);
    this->commands_dict.emplace("H", sf::Keyboard::H);
    this->commands_dict.emplace("J", sf::Keyboard::J);
    this->commands_dict.emplace("K", sf::Keyboard::K);
    this->commands_dict.emplace("L", sf::Keyboard::L);
    //third line
    this->commands_dict.emplace("Z", sf::Keyboard::Z);
    this->commands_dict.emplace("X", sf::Keyboard::X);
    this->commands_dict.emplace("C", sf::Keyboard::C);
    this->commands_dict.emplace("V", sf::Keyboard::V);
    this->commands_dict.emplace("B", sf::Keyboard::B);
    this->commands_dict.emplace("N", sf::Keyboard::N);
    this->commands_dict.emplace("M", sf::Keyboard::M);
    //numbers
    this->commands_dict.emplace("0", sf::Keyboard::Num0);
    this->commands_dict.emplace("1", sf::Keyboard::Num1);
    this->commands_dict.emplace("2", sf::Keyboard::Num2);
    this->commands_dict.emplace("3", sf::Keyboard::Num3);
    this->commands_dict.emplace("4", sf::Keyboard::Num4);
    this->commands_dict.emplace("5", sf::Keyboard::Num5);
    this->commands_dict.emplace("6", sf::Keyboard::Num6);
    this->commands_dict.emplace("7", sf::Keyboard::Num7);
    this->commands_dict.emplace("8", sf::Keyboard::Num8);
    this->commands_dict.emplace("9", sf::Keyboard::Num9);
    //f numbers
    this->commands_dict.emplace("f1", sf::Keyboard::F1);
    this->commands_dict.emplace("f2", sf::Keyboard::F2);
    this->commands_dict.emplace("f3", sf::Keyboard::F3);
    this->commands_dict.emplace("f4", sf::Keyboard::F4);
    this->commands_dict.emplace("f5", sf::Keyboard::F5);
    this->commands_dict.emplace("f6", sf::Keyboard::F6);
    this->commands_dict.emplace("f7", sf::Keyboard::F7);
    this->commands_dict.emplace("f8", sf::Keyboard::F8);
    this->commands_dict.emplace("f9", sf::Keyboard::F9);
    this->commands_dict.emplace("f10", sf::Keyboard::F10);
    this->commands_dict.emplace("f11", sf::Keyboard::F11);
    this->commands_dict.emplace("f12", sf::Keyboard::F12);
    //special symbols
    this->commands_dict.emplace("Space", sf::Keyboard::Space);
    this->commands_dict.emplace("Tab", sf::Keyboard::Tab);
    this->commands_dict.emplace("Enter", sf::Keyboard::Enter);
    this->commands_dict.emplace("Esc", sf::Keyboard::Escape);

    this->commands_dict.emplace("Up", sf::Keyboard::Up);
    this->commands_dict.emplace("Down", sf::Keyboard::Down);
    this->commands_dict.emplace("Left", sf::Keyboard::Left);
    this->commands_dict.emplace("Right", sf::Keyboard::Right);

}

sf::Keyboard::Key Converter::converting(std::string string) {
    return commands_dict.at(string);
}
