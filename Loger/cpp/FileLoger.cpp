#include "../header/FileLoger.h"


FileLoger::FileLoger() : FileLoger("LogFile.txt") {}

FileLoger::FileLoger(const std::string& filename): file(filename) {}

////TODO перугрузить оператор
void FileLoger::print(std::string& string) {}
//    if(file.is_open()){
//        file << string;
//    }
//    else{
//        std::cout<<"Error";
//    }
//}
//
//std::ostream& operator<<(std::string& string){
//    file << string << "\n";
//}

//FileLoger::~FileLoger() {
//    file.close();
//}





