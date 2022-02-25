#include <iostream>

using namespace std;

int main(){

    //Declare a 2 dimensional array of 5 cars and 5 models
    //Each car object has a make, model, year, and color
    string cars[5][5] = {
        {"Tesla", "Model S", "2016", "White"},
        {"Ford", "F-150", "2017", "Black"},
        {"Honda", "Civic", "2018", "Red"},
        {"Toyota", "Corolla", "2019", "Blue"},
        {"Nissan", "Leaf", "2020", "Green"}
    };

    //print out the car names
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << cars[i][j] << " ";
        }
        cout << endl;
    }
    return 0;

}