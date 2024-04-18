// https://leetcode.com/problems/valid-palindrome/description
// approach 2 - using the string with pointers, not creating new string, formatting string in place

#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
	// convert all uppercase letters into lowercase letters and remove all non-alphanumeric characters
	void formatStr(string &str) {
		int j = 0;
		for (int i = 0; i < str.size(); ++i) {
			// used function from header 'cctype', to check if char is alphanumeric
			if (isalnum(str[i])) {
				str[j++] = tolower(str[i]);
			}
		}
		str.resize(j); // resize the string to remove any extra char at the end
	}

	bool checkStr(string &str, int start, int end) {
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
		formatStr(s);
		return checkStr(s, 0, s.size() - 1);
	}
};

int main()
{
	Solution s;
	string str = "A man, a plan, a canal: Panama";
	cout << s.isPalindrome(str) << endl;
}