#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {

	string str;
	cin >> str;

	for (char c : str) {
		if (!ispunct(c))
			cout << c;
	}
	
	return 0;
}