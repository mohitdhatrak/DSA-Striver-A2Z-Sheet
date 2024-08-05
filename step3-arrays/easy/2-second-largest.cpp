// https://www.geeksforgeeks.org/problems/second-largest3735/1
// time complexity = O(n)
// space complexity = O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int print2largest(vector<int> &arr) {
        int secondLargest = -1;
        int max = arr[0];

        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] > max) {
                secondLargest = max;
                max = arr[i];
            } else if (arr[i] != max && arr[i] > secondLargest) {
                secondLargest = arr[i];
            }
        }

        return secondLargest;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {12, 35, 1, 10, 34, 1};
    cout << s.print2largest(nums);
    cout << endl;
}