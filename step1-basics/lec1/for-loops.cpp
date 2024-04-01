// https://www.naukri.com/code360/problems/nth-fibonacci-number_74156

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int a = 1;
	int b = 1;

	if (n == 1 || n == 2) {
		cout << 1;
	} else {
		int temp;

		for (int i = 2; i < n; ++i) {
			temp = a + b;
			a = b;
			b = temp;
		}

		cout << temp;
	}
}