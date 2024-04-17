// https://www.naukri.com/code360/problems/-print-n-times_8380707
// time complexity = O(n)
// space complexity = O(n)

#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
	void getStr(int x, vector<string> &v) {
		// approach 1 -
		// v.push_back("Coding Ninjas");
		// if (x > 1) {
		// 	getStr(x - 1, v);
		// }

		// or approach 2 -
		v.push_back("Coding Ninjas");
		if (x == 1) {
			return; // we can also use return like this for breaking condition
		}
		getStr(x - 1, v);
	}

public:
	vector<string> printNTimes(int n) {
		vector<string> str;
		getStr(n, str);
		return str;
	}
};

int main()
{
	Solution s;
	int n = 5;

	vector<string> str = s.printNTimes(n);
	for (int i = 0; i < str.size(); ++i)
	{
		cout << str[i] << " ";
	}
}