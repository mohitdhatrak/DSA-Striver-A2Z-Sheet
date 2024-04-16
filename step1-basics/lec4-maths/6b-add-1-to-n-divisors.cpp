// https://www.naukri.com/code360/problems/sum-of-all-divisors_8360720

// thinking as per logic in 6c, we can get a better solution than 6a
// time complexity = O(n) -- better

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	int sumOfAllDivisors(int n) {
		int sum = 0;

		for (int i = 1; i <= n; ++i) {
			sum += i * (n / i); // it's important we divide first then multiply
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