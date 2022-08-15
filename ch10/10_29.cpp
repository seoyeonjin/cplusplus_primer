#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using std::vector;
using std::string;

int main() {
	std::ifstream ifs("test.txt");
	std::istream_iterator<string> in(ifs), eof;
	vector<string> vec;
	while (in != eof) {
		vec.push_back(*in);
		++in;
	}

	for (auto elem : vec) {
		std::cout << elem << " ";
	}
	return 0;
}