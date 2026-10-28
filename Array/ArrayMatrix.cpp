// Write a C++ program to input and display a matrix using a two-dimensional array. 

#include <iostream>
using namespace std;

int main() {
    int matrix[3][3];

    cout << "Enter 9 elements of the matrix:\n";

    // Input matrix elements
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }

    // Display matrix
    cout << "The matrix is:\n";

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
