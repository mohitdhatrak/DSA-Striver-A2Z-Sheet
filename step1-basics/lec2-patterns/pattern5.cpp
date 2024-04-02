// https://www.naukri.com/code360/problems/seeding_6581892

// * * *
// * *
// *

#include <iostream>
using namespace std;

void seeding(int n) {
    for (int i = n; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << "* ";
        }
        cout << "\n";
    }
}

int main ()
{
    int n = 3;
    seeding(n);
}