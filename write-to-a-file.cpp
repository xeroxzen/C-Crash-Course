#include <iostream>
//Include header file for writing to a file
#include <fstream>

int main(){
    std::fstream file;
    file.open("file.txt", ios::out);
    if(!file){
        std::cout << "File creation failed" << std::endl;

    }else{
        std::cout << "File created";
        file << "My name is Andile"; // Writing to the file 
        file.close();
    }

    return 0;
}

