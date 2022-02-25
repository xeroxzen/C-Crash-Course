#include <iostream>
using namespace std;

int main(){

    //Declare a single dimensional array of 5 cars
    //Each car object has a make, model, year, and color
    
    //Declare a variable to hold the number of cars in the array
    int numberOfCars = 5;
    string cars[numberOfCars] = { "Tesla", "Ford", "Honda", "Toyota", "Nissan" };

    //print out the car names
    for (int i = 0; i < numberOfCars; i++) {
        cout << cars[i] << endl;
    }
    return 0;
}