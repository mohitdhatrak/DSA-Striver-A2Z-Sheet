// https://www.naukri.com/code360/problems/rotated-triangle_6573688

// *
// **
// ***
// **
// *

#include <iostream>
using namespace std;

void nStarTriangle(int n) {
    // upper half + middle line
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << "\n";
    }

    // lower half
    for (int i = n - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << "\n";
    }
}

int main ()
{
    int n = 3;
    nStarTriangle(n);
}