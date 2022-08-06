#include <iostream>
#include <string>

using std::string;

int main(int argc, char** argv) {
	string str;
	for (int i = 1; i != argc; ++i) {
		str += argv[i];
		str += " ";
	}

	std::cout << str << std::endl;
}