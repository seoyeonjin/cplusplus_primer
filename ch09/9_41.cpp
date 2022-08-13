#include <iostream>
#include <string>
#include <vector>

using std::vector;
using std::string;

int main() {
	vector<char> vec{ 'h','e' };

	string s(vec.cbegin(), vec.cend());

	std::cout << s << std::endl;



	return 0;
}