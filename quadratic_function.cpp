#include <iostream>
using namespace std;

int main(){
    //Compute a Quadratic function with a given a, b, and c
    //Declare a variable to hold the value of a
    int a = 2;
    //Declare a variable to hold the value of b
    int b = 3;
    //Declare a variable to hold the value of c
    int c = 4;
    //Declare a variable to hold the value of the discriminant
    int discriminant = (b * b) - (4 * a * c);
    //Declare a variable to hold the value of the root 1
    int root1 = (-b + discriminant) / (2 * a);
    //Declare a variable to hold the value of the root 2
    int root2 = (-b - discriminant) / (2 * a);
    //Print the value of the discriminant
    cout << "The discriminant is " << discriminant << endl;
    //Print the value of the root 1
    cout << "The root 1 is " << root1 << endl;
    //Print the value of the root 2
    cout << "The root 2 is " << root2 << endl;
    return 0;
}