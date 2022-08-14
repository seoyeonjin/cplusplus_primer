#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::string;
using std::vector;

bool func(string& s) {
	return s.size() >= 5;
}

int main() {
	vector<string> vec{ "a", "aaaaa", "bb", "123456" };

	vector<string>::iterator pivot = std::partition(vec.begin(), vec.end(), func);

	for (vector<string>::iterator it = vec.begin(); it != pivot; ++it) {
		std::cout << *it << " ";
	}
	return 0;
}