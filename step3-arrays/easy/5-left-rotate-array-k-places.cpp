// https://leetcode.com/problems/rotate-array/description/
// time complexity = O(2n)
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
    // incase no STL is allowed
    // TC -> O(n/2) or O(n)
    void reverseArr(vector<int>& arr, int start, int end) {
        while (start < end) {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }

    void leftRotate(vector<int>& nums, int k) {
        int n = nums.size();
        reverse(nums.begin(), nums.begin() + (k % n));
        reverse(nums.begin() + (k % n), nums.end());
        reverse(nums.begin(), nums.end());
    }

    void rightRotate(vector<int>& nums, int k) {
        int n = nums.size();
        reverse(nums.begin(), nums.begin() + (n - (k % n)));
        reverse(nums.begin() + (n - (k % n)), nums.end());
        reverse(nums.begin(), nums.end());
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    s.leftRotate(nums, 3);
    printVector(nums);
    s.rightRotate(nums, 3);
    printVector(nums);
    cout << endl;
}