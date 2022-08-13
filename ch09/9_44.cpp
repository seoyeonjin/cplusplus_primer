#include <iostream>
#include <string>

using std::string;

void re_func(string& s, string const& oldVal, string const& newVal) {


	for (size_t index = 0; index <= s.size() - oldVal.size();) {
		if (oldVal == s.substr(index, oldVal.size())) {
			s.replace(index, oldVal.size(), newVal);
			index += newVal.size();
		}
		else
			++index;
	}

}

int main() {

	string s{ "tho tho tho im hhhhhgggg thotho" };
	re_func(s, "tho", "though");

	std::cout << s << std::endl;

	return 0;
}