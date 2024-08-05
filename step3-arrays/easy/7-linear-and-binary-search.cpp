// https://www.geeksforgeeks.org/problems/who-will-win-1587115621/1

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // time complexity = O(N)
    // space complexity = O(1)
    int linearSearch(vector<int>& arr, int N, int K) {
        for (int i = 0; i < N; ++i) {
            if (arr[i] == K) {
                return i;
            }
        }

        return -1;
    }

    // time complexity = O(log N) -- only if array is sorted
    // space complexity = O(1)
    int binarySearch(vector<int> arr, int N, int K) {
        int low = 0;
        int high = N - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2; // since high can be too large

            if (arr[mid] == K) {
                return mid;
            }

            if (arr[mid] > K) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return -1;
    }
};

int main()
{
    Solution s;
    vector<int> arr = {6, 4, 3, 1, 2};
    vector<int> sortedArr = {1, 2, 3, 4, 6};

    // return 0-based index of element if found, else -1
    cout << s.linearSearch(arr, 5, 1);
    cout << endl;
    cout << s.binarySearch(sortedArr, 5, 2);
    cout << endl;
}