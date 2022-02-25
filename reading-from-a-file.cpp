//reading from a file stream 
//Include necessary headers
#include <iostream>
#include <fstream>

int main() {
    std::fstream fileWeAreReadingFrom;
    fileWeAreReadingFrom.open("some-text-file.txt", std::ios::in);
    
    if( !fileWeAreReadingFrom){
        std::cout << "Could not open the specified file";
    } else{
        char ch;
        while(!fileWeAreReadingFrom.eof()){
            fileWeAreReadingFrom >> ch;
            std::cout << ch << std::endl;
        }

    }
    fileWeAreReadingFrom.close();
    return 0;

}