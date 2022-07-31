#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
	string str;
	vector<string> result;
	while (cin >> str) {
		result.push_back(str);
	}
	return 0;
}