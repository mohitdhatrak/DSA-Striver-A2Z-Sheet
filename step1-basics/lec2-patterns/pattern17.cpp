// https://www.naukri.com/code360/problems/alpha-hill_6581921

//     A
//   A B A
// A B C B A

#include <iostream>
using namespace std;

void alphaHill(int n) {
    int ascii = 65;

    for (int i = 0; i < n; i++) {  
        // to print spaces before
        for (int s = n - (i + 1); s > 0; s--) {
            cout << "  ";
        }

        // to print letters of first half + middle line
        for (int j = 0; j <= i; j++) {
            cout << static_cast<char>(ascii + j) << " ";
        }

        // to print letters of second half
        for (int k = i; k > 0; k--) {
            cout << static_cast<char>(ascii + k - 1) << " ";
        }

        cout << "\n";
    }
}

int main ()
{
    int n = 4;
    alphaHill(n);
}