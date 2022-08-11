#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;
using std::string;
using std::istringstream;

struct PersonInfo {
	string name;
	vector<string> phones;
};

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
	for (PersonInfo& elem : people) {
		cout << elem.name << " ";
		for (string& elem2 : elem.phones)
			cout << elem2 << " ";
		cout << std::endl;
	}
	return 0;
}