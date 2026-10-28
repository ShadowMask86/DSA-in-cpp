// Write a C++ program to represent a polynomial using an array and display the polynomial.


#include <iostream>
using namespace std;

int main() {
    int poly[10];
    int degree;

    cout << "Enter the degree of the polynomial: ";
    cin >> degree;

    cout << "Enter coefficients from lowest to highest power:\n";

    for (int i = 0; i <= degree; i++) {
        cin >> poly[i];
    }

    cout << "Polynomial: ";

    for (int i = degree; i >= 0; i--) {
        if (poly[i] != 0) {
            cout << poly[i];

            if (i > 0) {
                cout << "x";

                if (i > 1) {
                    cout << "^" << i;
                }
            }

            if (i > 0) {
                cout << " + ";
            }
        }
    }

    cout << endl;

    return 0;
}
