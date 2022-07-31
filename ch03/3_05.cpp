#include <iostream>

using std::string;
using std::cin;
using std::cout;

int main() {

	string str, result; 
	cin >> str;
	result = str;
	while (cin >> str) {
		// result += str;
		result = result + " "  + str;
	}
	cout << result << " ";
	return 0;
}