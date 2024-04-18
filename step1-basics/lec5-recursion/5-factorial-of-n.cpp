// https://www.naukri.com/code360/problems/factorial-numbers-not-greater-than-n_8365435
// optimal time complexity = O(m) -- where 'm' is the number of factorial numbers which are less than or equal to 'n'
// optimal space complexity = O(m)

#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
	void getFactorial(long long n, int count, long long product, vector<long long> &v) {
		long long factorial = product * count;
		if (factorial <= n) {
			v.push_back(factorial); // only 'm' factorial are stored in vector
			getFactorial(n, count + 1, factorial, v); // run only 'm' times as per logic, since we save the factorial in product
		}
	}

public:
	vector<long long> factorialNumbers(long long n) {
		vector<long long> num;
		getFactorial(n, 1, 1, num);
		return num;
	}
};

int main()
{
	Solution s;
	long long n = 25;

	vector<long long> num = s.factorialNumbers(n);
	for (int i = 0; i < num.size(); ++i)
	{
		cout << num[i] << " ";
	}
}