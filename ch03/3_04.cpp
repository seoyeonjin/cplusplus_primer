#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

int main() {
	string str1, str2;
	cin >> str1 >> str2;

	if (str1 == str2)
		cout << "equal";
	else {
		// cout << (str1 > str2 ? "first input" : "second input");
		cout << (str1.size() >= str2.size() ? "first input" : "second input");
	}
	return 0;
}