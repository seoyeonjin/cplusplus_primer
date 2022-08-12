#include <iostream>
#include <deque>
#include <string>

using std::deque;
using std::string;


int main() {
	string word;
	deque<string> de1;
	while (std::cin >> word) {
		de1.push_back(word);
	}

	for (deque<string>::const_iterator it = de1.cbegin(); it != de1.cend(); it++) {
		std::cout << *it << " ";
	}

	return 0;
}