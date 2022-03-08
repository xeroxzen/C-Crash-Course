#include <iostream>
using namespace std;


//Create a function that returns true if an integer is evenly divisible by 5, and false otherwise.
bool divisibleByFive(int number) {
    if (number % 5 == 0) {
        return true;
    } else {
        return false;
    }
}

int main(){
    //prompt the user for a number and check if that number is divisible by 5
    cout << "Enter a number: ";
    int number;
    cin >> number;
    if (divisibleByFive(number)) {
        cout << "The number is divisible by 5." << endl;
    } else {
        cout << "The number is not divisible by 5." << endl;
    }
    
}