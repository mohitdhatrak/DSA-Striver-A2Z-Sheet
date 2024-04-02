// https://www.naukri.com/code360/problems/star-diamond_6573686

//   *
//  ***
// *****
// *****
//  ***
//   *

#include <iostream>
using namespace std;

void nStarDiamond(int n) {
    // upper half diamond
    for (int i = 0; i < n; i++) {
        // to print the spaces before
        for (int s = n - (i + 1); s > 0; s--) {
            cout << " ";
        }

        // to print the stars
        for (int j = 2 * (i + 1) - 1; j > 0; j--) {
            cout << "*";
        }

        cout << "\n";
    }

    // lower half diamond
    for (int i = n; i > 0; i--) {
        // to print the spaces before
        for (int s = n - i; s > 0; s--) {
            cout << " ";
        }

        // to print the stars
        for (int j = 2 * i - 1; j > 0; j--) {
            cout << "*";
        }

        cout << "\n";
    }
}

int main ()
{
    int n = 3;
    nStarDiamond(n);
}