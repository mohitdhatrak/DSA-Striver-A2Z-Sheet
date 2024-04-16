// https://www.naukri.com/code360/problems/hcf-and-lcm_840448
// optimal time complexity = O(log(min(a, b))), for finding the GCD of numbers a and b.
// eg. find the GCD of 24 and 18 using Euclid's algorithm
// 24 % 18 = 6
// New dividend = 18, New divisor = 6
// 18 % 6 = 0
// New dividend = 6, New divisor = 0

// Since the remainder is 0, the GCD is the current divisor, which is 6.
// In this example, the algorithm required only 2 divisions to find the GCD (log of 18, i.e. num of digits in 18 = 2)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	// n -> dividend
	// m -> divisor

	// as per euclid's algo
	// if remainder -> 0 then divisor is GCD
	// or else
	// remainder becomes new divisor
	// divisor becomes new dividend
	
	int calcGCD(int n, int m) {
		// with recursion -
		int remainder = n % m;
		if (remainder == 0) { // base case
			return m;
		}
		calcGCD(m, remainder);

		// without recursion -
		// while (m != 0) {
		// 	int temp = m;
		// 	m = n % m;
		// 	n = temp;
		// }
		// return n;
	}
};

int main()
{
	Solution s;
	int n = 6;
	int m = 4;

	cout << s.calcGCD(n, m) << endl;
}