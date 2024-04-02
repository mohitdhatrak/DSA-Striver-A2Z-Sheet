// https://www.naukri.com/code360/problems/symmetric-void_6581919

// * * * * * * 
// * *     * * 
// *         * 
// *         * 
// * *     * * 
// * * * * * * 

#include <iostream>
using namespace std;

void symmetry(int n) {
    // top half of the pattern
    for (int i = 0; i < n; i++) {
        // left half of pattern
        for (int j = n - i; j > 0; j--) {
            cout << "* ";
        }

        // spaces between
        // for (int s = (2 * i); s > 0; s--) {
        //     cout << "  ";
        // }

        // OR - to reduce iterations, print 2 times the space!
        for (int s = i; s > 0; s--) {
            cout << "    ";
        }

        // right half of pattern
        for (int k = n - i; k > 0; k--) {
            cout << "* ";
        }

        cout << "\n";
    }

    // bottom half of the pattern
    for (int i = 0; i < n; i++) {
        // left half of pattern
        for (int j = 0; j <= i; j++) {
            cout << "* ";
        }

        // spaces between
        // for (int s = (2 * (n - (i + 1))); s > 0; s--) {
        //     cout << "  ";
        // }

        // OR - to reduce iterations, print 2 times the space!
        for (int s = (n - (i + 1)); s > 0; s--) {
            cout << "    ";
        }

        // right half of pattern
        for (int k = 0; k <= i; k++) {
            cout << "* ";
        }

        cout << "\n";
    }
}

int main ()
{
    int n = 3;
    symmetry(n);
}