#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main() {
	string str;
	cin >> str;

	for (auto& c : str) {
		c = 'X';
	}
	cout << str << " ";
	return 0;
}