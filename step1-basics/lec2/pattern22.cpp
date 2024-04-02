// https://www.naukri.com/code360/problems/ninja-and-the-number-pattern-i_6581959

// 4444444
// 4333334
// 4322234
// 4321234
// 4322234
// 4333334
// 4444444

#include <iostream>
using namespace std;

void getNumberPattern(int n) {
    // top half of the pattern + middle line
    for (int i = 0; i < n; i++) {
        int repeat = n - i; // value that is repeated

        // left half of pattern + middle line
        for (int j = n; j > 0; j--) {
            if (j - repeat > 0) {
                cout << j;
            } else {
                cout << repeat;
            }
        }

        // right half of pattern
        for (int k = 1; k < n; k++) {
            if (repeat - k > 0) {
                cout << repeat;
            } else {
                cout << k + 1;
            }            
        }

        cout << "\n";
    }

    // bottom half of the pattern
    for (int i = 1; i < n; i++) {
        int repeat = i + 1; // value changed

        // BELOW 2 loops same as above, just the repeat value has changed!

        // left half of pattern + middle line
        for (int j = n; j > 0; j--) {
            if (j - repeat > 0) {
                cout << j;
            } else {
                cout << repeat;
            }
        }

        // right half of pattern
        for (int k = 1; k < n; k++) {
            if (repeat - k > 0) {
                cout << repeat;
            } else {
                cout << k + 1;
            }            
        }

        cout << "\n";
    }
}

int main ()
{
    int n = 4;
    getNumberPattern(n);
}