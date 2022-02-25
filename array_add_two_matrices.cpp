#include <iostream>
using namespace std;

int main() {
    //Declare two 2 dimensional arrays of 5x5 matrices
    //Each matrix element has a value of 1 or 0

    //Declare a variable to hold the number of matrices in the array
    int numberOfMatrices = 5;
    int matrix1[numberOfMatrices][numberOfMatrices] = {
        {1, 0, 1, 0, 1},
        {0, 1, 0, 1, 0},
        {1, 0, 1, 0, 1},
        {0, 1, 0, 1, 0},
        {1, 0, 1, 0, 1}
    };

    int matrix2[numberOfMatrices][numberOfMatrices] = {
        {1, 0, 1, 0, 1},
        {0, 1, 0, 1, 0},
        {1, 0, 1, 0, 1},
        {0, 1, 0, 1, 0},
        {1, 0, 1, 0, 1}
    };

    //Add the matrix to the other matrix and print the result
    for (int i = 0; i < numberOfMatrices; i++) {
        for (int j = 0; j < numberOfMatrices; j++) {
            matrix1[i][j] += matrix2[i][j];
            cout << matrix1[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}