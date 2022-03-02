#include <iostream>
using namespace std;

int main(){

    //Get the previous meter readings and the current meter readings from the user
    cout << "Enter the previous meter readings: ";
    int previousMeterReading;
    cin >> previousMeterReading;
    cout << "Enter the current meter readings: ";
    int currentMeterReading;
    cin >> currentMeterReading;

    //Calculate the number of units consumed
    int unitsConsumed = currentMeterReading - previousMeterReading;
    //print the number of units consumed
    cout << "The number of units consumed is " << unitsConsumed << endl;

    //Calculate the cost of the bill
    double costOfBill;
    if (unitsConsumed <= 100) {
        costOfBill = unitsConsumed * 0.60;
    } else if (unitsConsumed > 100 && unitsConsumed <= 300) {
        costOfBill = 100 * 0.60 + (unitsConsumed - 100) * 0.75;
        //calculate surcharge that is 10% of the cost
        costOfBill += costOfBill * 0.1;

    } else {
        costOfBill = 100 * 0.60 + 100 * 0.75 + (unitsConsumed - 300) * 0.90;
        //calculate surcharge of 0.20c of the total cost of the bill
        costOfBill += costOfBill * 0.2; 
    }

    //print the cost of the bill
    cout << "The cost of the bill is $" << costOfBill << endl;

    return 0;
    


}