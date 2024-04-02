// https://www.naukri.com/code360/problems/alpha-ramp_6581888

// A
// B B
// C C C
// D D D D

#include <iostream>
using namespace std;

void alphaRamp(int n) {
    int ascii = 65;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << static_cast<char>(ascii + i) << " ";
        }
        cout << "\n";
    }
}

int main ()
{
    int n = 4;
    alphaRamp(n);
}