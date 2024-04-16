// https://www.naukri.com/code360/problems/check-armstrong_589
// optimal time complexity = O(log n)

// for any number n, the number of digits it has is given by floor(log10 n) + 1
// so while loop here runs log n times not n, hence complexity is log n and not n

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	bool checkArmstrong(int n) {
		int nCopy = n;

		int power = to_string(n).length();
        // OR
        // int power = 0;
        // while (nCopy > 0) {
        //     power++;
        //     nCopy = nCopy / 10;
        // }
        // nCopy = n;

		int sum = 0;

		while (nCopy > 0) {
			sum += pow((nCopy % 10), power);
			nCopy = nCopy / 10;
		}

		return (sum == n);
	}
};

int main()
{
	Solution s;
	int n = 1634;

	cout << s.checkArmstrong(n) << endl;
}