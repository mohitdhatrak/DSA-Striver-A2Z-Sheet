// https://www.naukri.com/code360/problems/find-character-case_58513

#include<iostream>
using namespace std;

int main() {
	char ch;
	cin >> ch;

	// int ascii = ch; // implicit casting
	int ascii = static_cast<int>(ch); // explicit casting - good practice

	if (ascii >= 97 && ascii <= 122) {
		cout << 0;
	} else if (ascii >= 65 && ascii <= 90) {
		cout << 1;
	} else {
		cout << -1;
	}
}