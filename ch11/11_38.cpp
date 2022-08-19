#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <unordered_map>
#include <fstream>
#include <sstream>

using std::string;
using std::vector;
using std::map;
using std::ifstream;
using std::unordered_map;

void word_counting() {
	unordered_map<string, size_t> word_count;
	string word;
	while (std::cin >> word)
		++word_count[word];
	for (const auto& w : word_count)
		std::cout << w.first << " occurs " << w.second
		<< (((w.second) > 1) ? " times " : " time ") << std::endl;

}

unordered_map<string, string> buildMap(ifstream& map_file) {
	unordered_map<string, string> trans_map;
	string key;
	string value;
	while (map_file >> key && getline(map_file, value))
		if (value.size() > 1)
			trans_map[key] = value.substr(1);
		else {
			std::cout << ("no rule for " + key);
			break;
		}
	return trans_map;
}

const string& transform(const string& s, const unordered_map<string, string>& m) {
	auto map_it = m.find(s);
	if (map_it != m.cend())
		return map_it->second;
	else
		return s;
}


void word_transform(ifstream& map_file, ifstream& input) {
	auto trans_map = buildMap(map_file);
	string text;
	while (getline(input, text)) {
		std::istringstream stream(text);
		string word;
		bool firstword = true;
		while (stream >> word) {
			if (firstword)
				firstword = false;
			else
				std::cout << " ";
			std::cout << transform(word, trans_map);
		}
		std::cout << std::endl;
	}
}

int main() {

	return 0;
}