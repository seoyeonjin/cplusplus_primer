#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::istringstream;

void openAndRead(const string& file, vector<string>& vec) {
	std::ifstream input(file);

	if (input) {
		string line;
		while (std::getline(input, line))
			vec.push_back(line);
	}

}

int main() {
	string file = "./temp_file.txt";
	vector<string> vec;

	openAndRead(file, vec);

	for (string& elem : vec) {
		istringstream iss(elem);
		string word;
		while(iss >> word)
			cout << word << endl;
	}

	return 0;
}