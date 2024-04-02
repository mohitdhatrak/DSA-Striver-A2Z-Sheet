// https://www.naukri.com/code360/problems/increasing-letter-triangle_6581897

// A
// A B
// A B C 
// A B C D

#include <iostream>
using namespace std;

void nLetterTriangle(int n) {
    int ascii = 65;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
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