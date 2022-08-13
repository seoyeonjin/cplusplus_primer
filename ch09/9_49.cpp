#include <iostream>
#include <fstream>
#include <string>

using std::string; 
using std::ifstream;


// 포함하지 않는 가장 긴 string 출력

int main() {
	ifstream input("./test.txt");
	string input_str, longest_str;
	string not_ascenders_descenders("aceilmnorsuvwxz");
	while (input >> input_str) {
		if ((input_str.find_first_not_of(not_ascenders_descenders)) == string::npos)
			longest_str = longest_str.size() < input_str.size() ? input_str : longest_str;
			//std::cout << input_str << std::endl;
	}
	std::cout << longest_str << std::endl;
		
	string result; 

	return 0;
}