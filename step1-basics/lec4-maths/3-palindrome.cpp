// https://leetcode.com/problems/palindrome-number

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	bool isPalindrome(int x) {
		if (x < 0) {
			return false;
		}

		int n = x;
		long long int reverse = 0;

		while (n > 0) {
			int last = n % 10;
			reverse = reverse * 10 + last;
			n = n / 10;
		}

		if (reverse == x) {
			return true;
		}

		return false;
	}
};

int main()
{
	Solution s;
	int n = 121;

	cout << s.isPalindrome(n) << endl;
}