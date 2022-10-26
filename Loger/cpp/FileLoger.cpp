#include "../header/FileLoger.h"


FileLoger::FileLoger() : FileLoger("/home/tatyana/CLionProjects/Game/LogFile.txt") {}

FileLoger::FileLoger(const std::string& filename){
    file.open(filename,std::ios_base::app);
}

void FileLoger::print(std::string& string){
    if(file.is_open()){
       file << string << "\n";
    }
    else{
        std::cout<<"[Error] Error!\n";
    }
}

std::ostream& operator<<(std::ofstream& stream, FileLoger& obj) {
    stream<<obj.message;
    return stream;
}

FileLoger::~FileLoger() {
    file.close();
}









