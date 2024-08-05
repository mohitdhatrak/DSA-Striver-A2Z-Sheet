// https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/
// time complexity = O(n)
// space complexity = O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int>& nums) {
        int index = 0;
        for (int i = 1; i < nums.size(); ++i) {
            // '!=' condition works for both asc and desc sorted arrays
            if (nums[i] != nums[index]) {
                index++;
                nums[index] = nums[i];
            }
        }

        return index + 1;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    cout << s.removeDuplicates(nums);
    cout << endl;
}