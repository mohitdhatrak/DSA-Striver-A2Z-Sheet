// https://www.naukri.com/code360/problems/n-triangles_6573689

// 1
// 1 2 
// 1 2 3

#include <iostream>
using namespace std;

void nTriangle(int n) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << "\n";
    }
}

int main ()
{
    int n = 3;
    nTriangle(n);
}