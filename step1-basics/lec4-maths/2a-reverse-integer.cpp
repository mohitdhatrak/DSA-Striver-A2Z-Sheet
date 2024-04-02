// https://leetcode.com/problems/reverse-integer/description

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	int reverse(int x) {
		int n;
		n = abs(x);

		long long int revNum = 0;

		while (n > 0) {
			int last = n % 10;
			revNum = revNum * 10 + last;
			n = n / 10;
		}

		revNum = x < 0 ? -revNum : revNum;

		// if (revNum < pow(-2, 31) || revNum > pow(2, 31) - 1) {
		// OR
		if (revNum < INT_MIN || revNum > INT_MAX) {
			revNum = 0;
		}

		return revNum;
	}
};

int main()
{
	Solution s;
	int n = -321;

	cout << s.reverse(n) << endl;
}