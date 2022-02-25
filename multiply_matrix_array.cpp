#include <iostream>
using namespace std;

int main(){
    //Declare two 2 dimensional arrays of a 3x3 matrix
    //Each matrix element has a value between 1 and 9
    int matrix1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int matrix2[3][3] = {
        {3, 2, 1},
        {6, 5, 4},
        {9, 8, 7}
    };

    //print out both matrix1 and matrix2
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix1[i][j] << " ";
        }
        cout << endl;
    }

    //Multiply the matrix to the other matrix and print the result
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrix1[i][j] *= matrix2[i][j];
            cout << matrix1[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}