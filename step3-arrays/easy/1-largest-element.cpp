// https://www.geeksforgeeks.org/problems/largest-element-in-array4009/0
// time complexity = O(n)
// space complexity = O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int max = arr[0];

        for (int el : arr) {
            max = el > max ? el : max;
        }

        return max;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1, 8, 7, 56, 90};
    cout << s.largest(nums, nums.size());
    cout << endl;
}