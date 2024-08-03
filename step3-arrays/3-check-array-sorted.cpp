// https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/
// time complexity = O(n)
// space complexity = O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        // to check first and last element order, since the elements rotate, we need to check all pairs for this logic
        if (nums[0] < nums[n - 1]) {
            count++;
        }

        for (int i = 1; i < n; ++i) {
            if (nums[i] < nums[i - 1]) {
                count++;
                if (count > 1) {
                    return false;
                }
            }
        }

        return true;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {3, 4, 5, 1, 2};
    cout << s.check(nums);
    cout << endl;
}