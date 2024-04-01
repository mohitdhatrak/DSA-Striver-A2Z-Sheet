// https://www.naukri.com/code360/problems/seeding_6581892

// * * *
// * *
// *

void seeding(int n) {
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}