#include <iostream>
#include <string>

using std::string;

string prefix_suffix(string const name, string const prefix, const string suffix) {
	string new_name = name;

	new_name.insert(new_name.begin(), prefix.begin(), prefix.end());
	new_name.append(suffix);

	return new_name;
}


int main() {


	std::cout << prefix_suffix("hello", "pre", "suf") << std::endl;


	return 0;
}