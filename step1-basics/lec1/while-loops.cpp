// https://www.naukri.com/code360/problems/sum-of-even-odd_624650

#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int even = 0;
	int odd = 0;

	while (n > 0) {
		int last = n % 10;

		if (last % 2 == 0) {
			even += last;
		} else {
			odd += last;
		}

		n = n / 10;
	}

	cout << even << " " << odd;
}