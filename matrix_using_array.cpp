#include <iostream>
using namespace std;

int main(){
    //Declare a 2 dimensional array of a 3x3 matrix
    //Each matrix element has a value of 1 or 0
    int matrix[3][3] = {
        {1, 0, 1},
        {0, 1, 0},
        {1, 0, 1}
    };

    //print out the matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}