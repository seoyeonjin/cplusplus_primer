#include <iostream>
#include <deque>
#include <string>
#include <list>

using std::deque;
using std::list;
using std::string;


int main() {
	string word;
	deque<string> de1;
	list<string> list1;
	while (std::cin >> word) {
		list1.push_back(word);
	}

	for (list<string>::const_iterator it = list1.cbegin(); it != list1.cend(); it++) {
		std::cout << *it << " ";
	}

	return 0;
}