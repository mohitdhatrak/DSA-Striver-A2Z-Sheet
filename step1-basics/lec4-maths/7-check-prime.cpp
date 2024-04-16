// https://www.naukri.com/code360/problems/check-prime_624934
// optimal time complexity = O(sqrt n)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	bool isPrime(int n) {
		if (n == 1) {
			return false;
		}

        // we only check till sqrt as,
        // eg. n = 16
        // factors = 1, 2, 4, 8, 16
        // sqrt of 16 = 4, check the above example, after the square root value 4
        // 1 x 16, 2 x 8, 4 x 4, 8 x 2, 16 x 1
        // the values are repeated, i.e. 2 x 8 is same as 8 x 2, so its enough to check till sqrt of n
		for (int i = 2; i <= sqrt(n); ++i) {
			if (n % i == 0) {
				return false;
			}
		}

		return true;
	}
};

int main()
{
	Solution s;
	int n = 5;

	cout << s.isPrime(n) << endl;
}