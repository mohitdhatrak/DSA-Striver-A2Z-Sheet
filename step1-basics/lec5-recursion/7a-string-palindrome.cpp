// https://leetcode.com/problems/valid-palindrome/description
// approach 1 - getting memory limit exceeded!
// works well for smaller strings

#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
	// convert all uppercase letters into lowercase letters and remove all non-alphanumeric characters
	string formatStr(string str) {
		string newStr = "";

        // instead of this we can also use 'isalnum' function from header 'cctype', to check if char is alphanumeric
		for (int i = 0; i < str.size(); i++) {
			if (str[i] >= 65 && str[i] <= 90) { // uppercase letters, make them lowercase
				newStr += char(tolower(str[i]));
			} else if ((str[i] >= 97 && str[i] <= 122)
			           || (str[i] >= 48 && str[i] <= 57)) { // lowercase letters and numbers, remain same
				newStr += str[i];
			}
		}

		return newStr;
	}

	bool checkStr(string str, int start, int end) {
		if (start >= end) {
			return true;
		} else if (str[start] == str[end]) {
			return checkStr(str, start + 1, end - 1);
		} else {
			return false;
		}
	}

public:
	bool isPalindrome(string s) {
		string str = formatStr(s);
		return checkStr(str, 0, str.size() - 1);
	}
};

int main()
{
	Solution s;
	string str = "A man, a plan, a canal: Panama";
	cout << s.isPalindrome(str) << endl;
}

// https://www.naukri.com/code360/problems/check-palindrome-recursive_624386
// solution -

// bool checkStr(string &str, int start, int end) {
//     if (start >= end) {
//         return true;
//     } else if (str[start] == str[end]) {
//         return checkStr(str, start + 1, end - 1);
//     } else {
//         return false;
//     }
// }

// bool isPalindrome(string &str) {
//     return checkStr(str, 0, str.size() - 1);
// }