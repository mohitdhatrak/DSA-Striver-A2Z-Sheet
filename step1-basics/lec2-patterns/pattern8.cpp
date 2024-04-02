// https://www.naukri.com/code360/problems/reverse-star-triangle_6573685

// *******
//  *****
//   ***
//    *

#include <iostream>
using namespace std;

void nStarTriangle(int n) {
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
    nStarTriangle(n);
}