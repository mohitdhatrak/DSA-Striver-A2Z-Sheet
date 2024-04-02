// https://www.naukri.com/code360/problems/binary-number-triangle_6581890

// 1
// 0 1
// 1 0 1
// 0 1 0 1

#include <iostream>
using namespace std;

void nBinaryTriangle(int n) {
    for (int i = 0; i < n; i++) {
        int binary = 1;
        if (i % 2 != 0) {
            binary = 0;
        }

        for (int j = 0; j <= i; j++) {
            cout << binary << " ";
            binary = (binary == 1) ? 0 : 1;
        }

        cout << "\n";
    }
}

int main ()
{
    int n = 4;
    nBinaryTriangle(n);
}