#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main() {
	string str;
	vector<string> result;
	while (cin >> str) {
		result.push_back(str);
	}

	for (string& temp : result) {
		for (char& c : temp) {
			c = toupper(c);
		}
	}

	int count = 0;
	for (string temp : result) {
		cout << temp << " ";
		count++;
		if (count == 8) {
			count = 0;
			cout << endl;
		}
	}
	return 0;
}