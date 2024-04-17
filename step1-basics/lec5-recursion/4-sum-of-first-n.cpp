// https://www.naukri.com/code360/problems/sum-of-first-n-numbers_8876068

// for recursive approach -
// time complexity = O(n)
// space complexity = O(n)

#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
	long long getSum(long long x, long long sum) {
		sum += x;
		if (x > 1) {
			getSum(x - 1, sum);
		} else {
			return sum;
		}
	}

public:
	long long sumFirstN(long long n) {
		return getSum(n, 0);
	}
};

int main()
{
	Solution s;
	long long n = 5;
	cout << s.sumFirstN(n) << endl;
}

// non-recursive approach -
// time complexity = O(1)
// space complexity = O(1)

// long long sumFirstN(long long n) {
//     return n * (n + 1) / 2;
// }