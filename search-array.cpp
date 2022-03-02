#include <iostream>
using namespace std;

int main(){
    //Declare and load an array of 15 integers
    int array[15] = {1, 2, 3, 3, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

    //Prompt the user to enter a number and find out how many times it appears in the array
    cout << "Enter a number: ";
    int number;
    cin >> number;
    int count = 0;
    for (int i = 0; i < 15; i++) {
        if (array[i] == number) {
            count++;
        }
    }
    cout << "The number " << number << " appears " << count << " times in the array." << endl;
    return 0;
}