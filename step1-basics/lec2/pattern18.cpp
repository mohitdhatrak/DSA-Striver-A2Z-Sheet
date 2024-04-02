// https://www.naukri.com/code360/problems/alpha-triangle_6581429

// D
// D C
// D C B 
// D C B A

#include <iostream>
using namespace std;

void alphaTriangle(int n) {
    int ascii = 65 + (n - 1);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << static_cast<char>(ascii - j) << " ";
        }
        cout << "\n";
    }
}

int main ()
{
    int n = 4;
    alphaTriangle(n);
}