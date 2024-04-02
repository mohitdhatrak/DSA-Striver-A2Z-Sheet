// https://www.naukri.com/code360/problems/reverse-number-triangle_6581889

// 1 2 3
// 1 2
// 1

#include <iostream>
using namespace std;

void nNumberTriangle(int n) {
    for (int i = n; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << j + 1 << " ";
        }
        cout << "\n";
    }
}

int main ()
{
    int n = 3;
    nNumberTriangle(n);
}