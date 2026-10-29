// Write a C++ program to represent a sparse matrix using an array by storing only its non-zero elements and display the representation.

#include <iostream>
using namespace std;

int main() {
    int a[3][3];
    int sparse[9][3];
    int k = 0;

    cout << "Enter 9 elements of the matrix:\n";

    // Input the original matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }

    // Store only non-zero elements
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (a[i][j] != 0) {
                sparse[k][0] = i;
                sparse[k][1] = j;
                sparse[k][2] = a[i][j];
                k++;
            }
        }
    }

    // Display sparse matrix representation
    cout << "\nRow Column Value\n";

    for (int i = 0; i < k; i++) {
        cout << sparse[i][0] << "     "
             << sparse[i][1] << "      "
             << sparse[i][2] << endl;
    }

    return 0;
}
