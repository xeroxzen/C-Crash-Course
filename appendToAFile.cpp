#include <iostream>
#include <fstream>
using namespace std;

int main(){
    // Append more personal details to the file.
    string gender, dateOfBirth, course;

    //Prompt the user to enter the above details
    cout << "Enter your gender: ";
    cin >> gender;
    cout << "Enter your date of birth: ";
    cin >> dateOfBirth;
    cout << "Enter your course: ";
    cin >> course;
    cout <<endl;

    // Open a file details.txt and append the details to  it 
    ofstream outFile;
    outFile.open("details.txt", ios::app);
    outFile << "Gender: " << gender << endl;
    outFile << "Date of Birth: " << dateOfBirth << endl;
    outFile << "Course: " << course << endl;
    outFile.close();

    // Open the file and read the details;
    ifstream inFile;
    inFile.open("details.txt");
    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
    }
    inFile.close();

    return 0;
}