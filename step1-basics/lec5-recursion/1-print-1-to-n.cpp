// problem 1 and 3 same as per A-Z sheet, skipped 3
// https://www.naukri.com/code360/problems/print-1-to-n_628290
// time complexity = O(n)
// space complexity = O(n) -- avoid making new vector each time, instead pass vector reference

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	// new vector each time -
	// vector<int> printNos(int x) {
	// 	if (x == 1) {
	// 		vector<int> num = {1};
	// 		return num;
	// 	}

	// 	vector<int> num = printNos(x - 1);
	// 	num.push_back(x);
	// 	return num;
	// }

	void getNum(int n, vector<int>& v) { // don't forget &
		if (n > 1) {
			getNum(n - 1, v);
		}

		v.push_back(n);
	}

	vector<int> printNos(int x) {
		vector<int> num;
		getNum(x, num);
		return num;
	}
};

int main()
{
	Solution s;
	int n = 5;

	vector <int> num = s.printNos(n);
	for (int i = 0; i < num.size(); ++i)
	{
		cout << num[i] << endl;
	}
}