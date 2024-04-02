// E
// D E
// C D E 
// B C D E
// A B C D E

#include <iostream>
using namespace std;

void alphaTriangle(int n) {
    for (int i = 0; i < n; i++) {
        int ascii = 65 + (n - (i + 1));

        for (int j = 0; j <= i; j++) {
            cout << static_cast<char>(ascii + j) << " ";
        }
        cout << "\n";
    }
}

int main ()
{
    int n = 5;
    alphaTriangle(n);
}