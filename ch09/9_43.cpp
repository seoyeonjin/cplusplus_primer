#include <iostream>
#include <string>

using std::string;

void re_func(string& s, string const& oldVal, string const& newVal) {

	for (string::iterator it = s.begin(); it <= s.end() - oldVal.size();) {
		if (oldVal == string{ it, it + oldVal.size() }) {
			it = s.erase(it, it + oldVal.size());
			it = s.insert(it, newVal.begin(), newVal.end());
			it += newVal.size();
		}
		else
			++it;
	}
}

int main() {

	string s{ "tho tho tho im hhhhhgggg thotho" };
	re_func(s, "tho", "though");

	std::cout << s << std::endl;
	
	return 0;
}