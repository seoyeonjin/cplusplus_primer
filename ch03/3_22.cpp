#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {

	vector<string> vec;
	string line;
	while (getline(cin, line)) {
		vec.push_back(line);
	}


	for (vector<string>::iterator it = vec.begin(); it != vec.end(); ++it) {
		for (char& c : *it)
			c = toupper(c);
		cout << *it << endl;
	}
	return 0;
}