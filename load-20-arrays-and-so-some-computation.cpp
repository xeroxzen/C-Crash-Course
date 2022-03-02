#include <iostream>
using namespace std;

int main(){
    //Load an array of 20 integers from the user
    int array[20];
    cout << "Enter 20 integers: ";
    for (int i = 0; i < 20; i++) {
        cin >> array[i];
    }

    //Take 20 integer inputs from user and print the following:

    // 1. number of positive numbers
    // 2. number of negative numbers
    // 3. number of odd numbers
    // 4. number of even numbers
    // number of 0.

    //print the number of positive numbers
    int countPositive = 0;
    for (int i = 0; i < 20; i++) {
        if (array[i] > 0) {
            countPositive++;
        }
    }

    //print the number of negative numbers
    int countNegative = 0;
    for (int i = 0; i < 20; i++) {
        if (array[i] < 0) {
            countNegative++;
        }
    }

    //print the number of odd numbers
    int countOdd = 0;
    for (int i = 0; i < 20; i++) {
        if (array[i] % 2 != 0) {
            countOdd++;
        }
    }

    //print the number of even numbers
    int countEven = 0;
    for (int i = 0; i < 20; i++) {
        if (array[i] % 2 == 0) {
            countEven++;
        }
    }

    //print the number of 0
    int countZero = 0;
    for (int i = 0; i < 20; i++) {
        if (array[i] == 0) {
            countZero++;
        }
    }

    cout << "The number of positive numbers is " << countPositive << endl;
    cout << "The number of negative numbers is " << countNegative << endl;
    cout << "The number of odd numbers is " << countOdd << endl;
    cout << "The number of even numbers is " << countEven << endl;
    cout << "The number of 0 is " << countZero << endl;

    return 0;
}