// https://leetcode.com/problems/move-zeroes/description/
// time complexity = O(n)
// space complexity = O(1)

#include <bits/stdc++.h>
using namespace std;

// print vector
void printVector(vector<int>& v) {
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    cout << endl;
}

class Solution
{
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int j = -1; // always points to zeros

        // set j as 1st zero element
        for (int i = 0; i < n; ++i) {
            if (nums[i] == 0) {
                j = i;
                break;
            }
        }

        // if no zero found
        if (j == -1) return;

        // shift all non-zero elements ahead by STL swap
        for (int i = j + 1; i < n; ++i) {
            if (nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};

int main()
{
    Solution s;
    vector<int> nums = {0, 1, 0, 3, 12};
    s.moveZeroes(nums);
    printVector(nums);
    cout << endl;
}