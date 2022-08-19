#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using std::vector;
using std::string;
using std::cin; 
using std::map;


int main() {
	map<string, size_t> word_count;
	vector<string> exclude = { "The","But","And","Or","An","A","the","but","and","or","an","a" };
	string word;

	while (cin >> word) {
		if (find(exclude.cbegin(), exclude.cend(), word) == exclude.end())
			++word_count[word];
	}
	for (const auto& w : word_count) {
		std::cout << w.first << " occurs " << w.second << (((w.second) > 1) ? " times " : " time ") << std::endl;
	}
	return 0;
}
