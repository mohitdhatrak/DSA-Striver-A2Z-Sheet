// https://www.naukri.com/code360/problems/increasing-number-triangle_6581893

// 1
// 2 3
// 4 5 6 
// 7 8 9 10

#include <iostream>
using namespace std;

void nNumberTriangle(int n) {
    int num = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << num << " ";
            num++;
        }
        cout << "\n";
    }
}

int main ()
{
    int n = 4;
    nNumberTriangle(n);
}