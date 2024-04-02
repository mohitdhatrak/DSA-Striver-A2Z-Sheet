// https://www.naukri.com/code360/problems/reverse-bits_2181102

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	long long int reverseBits(long n) {
		// make a 32-bit binary string of n
		string binaryStr = "";
		for (int i = 31; i >= 0; i--) {
			char bit = '0';
			long long int power = pow(2, i);

			if (n >= power) {
				bit = '1';
				n = n - power;
			}

			binaryStr += bit;
		}

		// OR built-in method
		// bitset<32> binaryNum(n);
		// string binaryStr = binaryNum.to_string();

		// reverse the string of bits
		reverse(binaryStr.begin(), binaryStr.end());

		// for each bit '1' add that power to number to get integer value from binary
		long long int num = 0;
		for (int i = 0; i < 32; i++) {
			if (binaryStr[i] == '1') {
				num += pow(2, (31 - i));
			}
		}

		return num;
	}
};

int main()
{
	Solution s;
	long n = 3;

	cout << s.reverseBits(n) << endl;
}