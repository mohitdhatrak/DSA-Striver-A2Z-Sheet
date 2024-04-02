// https://www.naukri.com/code360/problems/reverse-letter-triangle_6581906

// A B C D
// A B C
// A B
// A

#include <iostream>
using namespace std;

void nLetterTriangle(int n) {
    int ascii = 65;

    for (int i = n; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << static_cast<char>(ascii + j) << " ";
        }
        cout << "\n";
    }
}

int main ()
{
    int n = 4;
    nLetterTriangle(n);
}