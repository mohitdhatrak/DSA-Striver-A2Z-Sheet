// https://www.naukri.com/code360/problems/ninja-and-the-star-pattern-i_6581920

// ****
// *  *
// *  *
// ****

#include <iostream>
using namespace std;

void getStarPattern(int n) {
    // 1st line
    for (int i = 0; i < n; i++) {
        cout << "*";
    }
    cout << "\n";    

    // other lines
    for (int i = 1; i < n - 1; i++) {
        for (int j = 0; j < n; j++) {
            if (j == 0 || j == n - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << "\n";
    }

    // last line
    if (n > 1) {
        for (int i = 0; i < n; i++) {
            cout << "*";
        }
    }

}

int main ()
{
    int n = 4;
    getStarPattern(n);
}