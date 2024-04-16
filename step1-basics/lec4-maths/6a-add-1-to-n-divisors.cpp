// https://www.naukri.com/code360/problems/sum-of-all-divisors_8360720

// time complexity = O(n * sqrt n) -- almost brute
// not optimal but better than brute n^2

#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
	int numDivisorsSum(int n) {
		int sum = 0;

		for (int i = 1; i <= sqrt(n); ++i) {
			if (n % i == 0) {
				if ((n / i) == i) {
					// add same factor only once i.e. if n  = 16, then 4 * 4, so add 4 only once
					sum += i;
				} else {
					// add both factors i.e. if n  = 16, then 2 * 8, so add both 2 and 8
					sum += i + (n / i);
				}
			}
		}

		return sum;
	}

public:
	int sumOfAllDivisors(int n) {
		int sum = 0;

		for (int i = 1; i <= n; ++i) {
			sum += numDivisorsSum(i);
		}

		return sum;
	}
};

int main()
{
	Solution s;
	int n = 5;

	cout << s.sumOfAllDivisors(n) << endl;
}