#include "../header/FileLoger.h"


FileLoger::FileLoger() : FileLoger("LogFile.txt") {}

FileLoger::FileLoger(const std::string& filename): file(filename) {}

//TODO перугрузить оператор
//void FileLoger::print(IMessage message) {
//    if(file.is_open()){
//        file << message;
//    }
//}
//
//std::ostream& operator<<(std::ofstream stream, FileLoger obj) {
//    stream << obj.message;}

FileLoger::~FileLoger() {
    file.close();
}




