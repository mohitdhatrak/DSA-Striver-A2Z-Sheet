// https://www.naukri.com/code360/problems/count-digits_8416387

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	int countDigits(int n) {
		int nCopy = n;
		int count = 0;

		while (nCopy > 0) {
			int last = nCopy % 10;

			if (last != 0 && n % last == 0) {
				count++;
			}

			nCopy = nCopy / 10;
		}

		return count;
	}
};

int main()
{
	Solution s;
	int n = 336;

	cout << s.countDigits(n) << endl;
}