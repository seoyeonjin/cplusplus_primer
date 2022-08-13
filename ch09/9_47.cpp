#include <iostream>
#include <string>


using std::string;

int main() {
	
	string s("ab2c3d7R4E6");
	string numbers("1234567890");

	string::size_type pos = 0;

	while ((pos = s.find_first_of(numbers, pos)) != string::npos) {
		std::cout << "found number at index: " << pos << " element is " << s[pos] << std::endl;
		++pos;
 	}
	std::cout << std::endl;

	pos = 0;
	while ((pos = s.find_first_not_of(numbers, pos)) != string::npos) {
		std::cout << "found alphabet at index: " << pos << " element is " << s[pos] << std::endl;
		++pos;
	}
	return 0;
}