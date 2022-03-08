#include <iostream>
#include <fstream>
using namespace std;

int main(){
    //Prompt the user for his/her personal details and save them to a file.
    string name, address, phoneNumber, email;
    int age;
    
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your home address: ";
    cin >> address;
    cout << "Enter your phone number: ";
    cin >> phoneNumber;
    cout << "Enter your email address: ";
    cin >> email;
    
    //Open a file and write the details to it.
    ofstream outFile;
    outFile.open("details.txt");
    outFile << "Name: " << name << endl;
    outFile << "Age: " << age << endl;
    outFile << "Address: " << address << endl;
    outFile << "Phone Number: " << phoneNumber << endl;
    outFile << "Email: " << email << endl;
    outFile.close();

    //Open the file and read the details from it.
    ifstream inFile;
    inFile.open("details.txt");
    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
    }
    inFile.close();

    return 0;
}