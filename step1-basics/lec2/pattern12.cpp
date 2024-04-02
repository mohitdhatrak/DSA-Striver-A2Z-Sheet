// https://www.naukri.com/code360/problems/number-crown_6581894

// 1             1
// 1 2         2 1
// 1 2 3     3 2 1
// 1 2 3 4 4 3 2 1

#include <iostream>
using namespace std;

void numberCrown(int n) {
    for (int i = 0; i < n; i++) {
        // to print numbers for left half of crown
        for (int j = 0; j <= i; j++) {
            cout << j + 1 << " ";
        }

        // to print spaces between
        // for (int s = 2 * (n - (i + 1)); s > 0; s--) {
        //     cout << "  ";
        // }

        // OR - to reduce iterations, print 2 times the space!
        for (int s = n - (i + 1); s > 0; s--) {
            cout << "    ";
        }
        
        // to print numbers for right half of crown
        for (int k = i + 1; k > 0; k--) {
            cout << k << " ";
        }

        // after whole line we go to next line
        cout << "\n";
    }

}

int main ()
{
    int n = 4;
    numberCrown(n);
}