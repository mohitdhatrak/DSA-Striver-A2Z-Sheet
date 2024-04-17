// https://www.naukri.com/code360/problems/n-to-1-without-loop_8357243
// time complexity = O(n)
// space complexity = O(n)

#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
	void getNum(int n, vector<int> &v) {
		v.push_back(n);

		if (n > 1) {
			getNum(n - 1, v);
		}
	}

public:
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