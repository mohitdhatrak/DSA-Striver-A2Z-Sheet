// https://leetcode.com/problems/fibonacci-number/description

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	int fib(int n) {
		if (n == 0) {
			return 0;
		} else if (n == 1) {
			return 1;
		}

		return fib(n - 1) + fib(n - 2);
	}
};

int main()
{
	Solution s;
	int n = 4;
	cout << s.fib(n) << endl;
}

// https://www.naukri.com/code360/problems/print-fibonacci-series_7421617
// solution -

// void fib(int n, int index, vector<int> &fibonacci) {
//     if (index == n) {
//         return;
//     } else {
//         int sum = fibonacci[index - 1] + fibonacci[index - 2];
//         fibonacci.push_back(sum);
//         fib(n, index + 1, fibonacci);
//     }
// }

// vector<int> generateFibonacciNumbers(int n) {
//     vector<int> fibonacci;

//     fibonacci.push_back(0); // since constraint is 1 <= n <= 45, so 1st element will always be there
//     if (n > 1) {
//         fibonacci.push_back(1); // adding 2nd element
//     }

//     if (n > 2) {
//         fib(n, 2, fibonacci); // to calculate and add further elements
//     }

//     return fibonacci;
// }