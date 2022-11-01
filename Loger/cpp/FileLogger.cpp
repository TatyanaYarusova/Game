#include "../header/FileLogger.h"


FileLogger::FileLogger() : FileLogger("/home/tatyana/CLionProjects/Game/LogFile.txt") {}

FileLogger::FileLogger(const std::string& filename){
    file.open(filename,std::ios_base::app);
}

void FileLogger::print(std::string& string){
    if(file.is_open()){
       file << string << "\n";
    }
    else{
        std::cout<<"[Error] Error!\n";
    }
}

std::ostream& operator<<(std::ofstream& stream, FileLogger& obj) {
    stream<<obj.message;
    return stream;
}

FileLogger::~FileLogger() {
    file.close();
}









