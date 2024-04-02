// https://www.naukri.com/code360/problems/n-2-forest_6570178

// * 
// * *
// * * *

#include <iostream>
using namespace std;

void nForest(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "* ";
        }
        cout << "\n";
    }
}

int main ()
{
    int n = 3;
    nForest(n);
}