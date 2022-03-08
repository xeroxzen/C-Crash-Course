#include <iostream>
using namespace std;

// Create a function that takes the age in years and returns the age in days.
int convertAgeToDays(int age) {
    return age * 365;
}

int main(){
    // prompt the user for their age;
    cout << "Enter your age: ";
    int age;
    cin >> age;
    // convert the age to days and print it to the user
    cout << "Your age in days is " << convertAgeToDays(age) << endl;

    return 0;
}