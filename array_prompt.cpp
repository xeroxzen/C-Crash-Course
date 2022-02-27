#include <iostream>
using namespace std;

int main(){
    //Prompt the user to enter an arbitrary number of numbers stored in an array then add the numbers to get the sum of the numbers in the array.
    //Add the numbers in the array to get the sum of the numbers in the array
    //Print the sum of the numbers in the array
    //Terminate the program when the users enters a negative number


    int array[10];
    int sum = 0;
    int size = 0;
    cout << "Enter a number: ";
    cin >> array[size];
    while (array[size] != 0) {
        sum += array[size];
        size++;
        cout << "Enter a number: ";
        cin >> array[size];
    }
    cout << "The sum of the numbers is: " << sum << endl;
    return 0;
}