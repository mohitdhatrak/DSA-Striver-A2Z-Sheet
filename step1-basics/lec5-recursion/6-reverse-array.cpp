// https://www.naukri.com/code360/problems/reverse-an-array_8365444
// time complexity = O(n)

#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
	void getReverseArr(int x, vector<int> &nums, vector<int> &arr) {
		arr.push_back(nums[x - 1]);

		if (x > 1) {
			getReverseArr(x - 1, nums, arr);
		}
	}

public:
	vector<int> reverseArray(int n, vector<int> &nums) {
		vector<int> reverseArr;
		getReverseArr(n, nums, reverseArr);
		return reverseArr;
	}
};

int main()
{
	Solution s;
	int n = 6;
	vector<int> arr = {5, 7, 8, 1, 6, 3};

	vector<int> reverseArr = s.reverseArray(n, arr);
	for (int i = 0; i < reverseArr.size(); ++i)
	{
		cout << reverseArr[i] << " ";
	}
}