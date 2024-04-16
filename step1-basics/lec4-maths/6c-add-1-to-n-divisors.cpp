// https://www.naukri.com/code360/problems/sum-of-all-divisors_8360720
// optimal time complexity = O(sqrt n)

// Explanation: (Use pen & copy for more clarity)

// 1    =   1
// 2    =   1   2
// 3    =   1       3
// 4    =   1   2       4
// 5    =   1               5
// 6    =   1   2   3           6
// 7    =   1                       7
// 8    =   1   2       4               8
// 9    =   1       3                       9
// 10  =    1   2           5                   10
//           _______x_____________________

// n = 10. So, sqrt = 3 (approx.)
// Frequency sum of each no. is i * n/i (till sqrt represented by x in example)
// Now the hard part, if you notice 10/1=10, 10/2=5 is forming a linear chain in reverse.
// Take its total sum: n/i * (n/i + 1)/2 that is 10+9+8+…, 5+4+3+…
// Delete the common part that is total sum till sqrt to avoid repetition.
// Total = Frequency sum till sqrt + Linear sum after sqrt - Linear sum till sqrt (for each iteration)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	int sumOfAllDivisors(int n) {
		// code explained:
		// linear sum of n means, sum from 1 to n = n * (n + 1) / 2
		// i * (n / i) gives sum of divisors till sqrt of n -- eqn 4
		// for remaining divisors, we find linear sum of (n / i) - put this in formula
		// for i = 1, sum includes all values till (10 / 1) = 10 -- eqn 1
		// for i = 2, sum includes all values till (10 / 2) = 5 -- eqn 2
		// for i = 3, sum includes all values till (10 / 3) = 3 -- eqn 3
		// now see the pattern after sqrt (in above eg.)
		// for numbers 4 & 5, they need to be added twice as 2 divisors -- eqn 5
		// -- in eqn 2 sum, 4 & 5 are added once, and in eqn 1 they are added again so 2 is complete
		// for 6 to 10, they need to be added just once as 1 divisor -- in eqn 1 sum this is handled
		// now in eqn 1, 2, 3 -- numbers 1, 2, 3 are also added in each iteration
		// but we have already considered them in eqn 4
		// so we subtract the sum of these 3 values in each iteration
		// sum is given by linear sum of sqrt(n)

		// also, see eqn 5, when we observe the pattern, we can see that
		// value of (n / i) gives us the divisor till which they are repeated atleast i times
		// for eg. i = 2 -- 10 / 2 = 5, so till divisor 5 the divisors get repeated atleast 2 times
		// for eg. i = 3 -- 10 / 3 = 3, so till divisor 3 the divisors get repeated atleast 3 times
		// this is how we derive that we need linear sum till n / i

		int sum = 0;
		int sqrtSum = floor(sqrt(n)) * (floor(sqrt(n)) + 1) / 2; // linear sum of sqrt(n)

		for (int i = 1; i <= sqrt(n); ++i) {
			int divisorTotalSum = i * (n / i);
			int remainingDivisorSum = n / i * (n / i + 1) / 2; // linear sum till (n / i)
			sum += divisorTotalSum + remainingDivisorSum - sqrtSum;
		}

		return sum;
	}
};

int main()
{
	Solution s;
	int n = 3;

	cout << s.sumOfAllDivisors(n) << endl;
}