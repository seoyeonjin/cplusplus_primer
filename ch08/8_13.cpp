#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::istringstream;

struct PersonInfo {
	string name;
	vector<string> phones;
};

bool valid(const string& str) {
	for (size_t i = 0; i < str.size(); i++) {
		if (!isdigit(str[i]))
			return false;
	}
	return true;
}

string format(const string& str) {
	return str.substr(0, 3) + "-" + str.substr(3, 4) + "-" + str.substr(7);
}

int main() {

	string line, word;
	vector<PersonInfo> people;
	istringstream record;
	while (getline(cin, line)) {
		PersonInfo info;
		record.clear(); // 추가
		record.str(line); // 추가
		record >> info.name;
		while (record >> word)
			info.phones.push_back(word);
		people.push_back(info);
		// cout << people.size() << std::endl;
	}


	for (const auto& entry : people) {
		std::ostringstream formatted, badNums;
		for (const auto& nums : entry.phones) {
			if (!valid(nums)) {
				badNums << " " << nums;
			}
			else
				formatted << " " << format(nums);
		}
		if (badNums.str().empty())
			cout << entry.name << " " << formatted.str() << endl;
		else
			std::cerr << "input error: " << entry.name << " invalid number(s) " << badNums.str() << endl;
	}
	return 0;
}