#include <iostream>
using namespace std;

//function to convert minutes to seconds
int convertMinutesToSeconds(int minutes) {
    return minutes * 60;
}

int main(){
    //print the number of minutes to seconds
    cout << "Enter the number of minutes: ";
    int minutes;
    cin >> minutes;
    cout << "The number of seconds is " << convertMinutesToSeconds(minutes) << endl;
    return 0;
}