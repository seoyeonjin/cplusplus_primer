#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::vector;
using std::string;

void openAndRead(const string& file, vector<string>& vec) {
	std::ifstream input(file);

	if (input) {
		string word;
		while (input >> word)
			vec.push_back(word);
	}

}

int main() {
	string file = "./temp_file.txt";
	vector<string> vec;

	openAndRead(file, vec);

	for (const string elem : vec)
		cout << elem << endl;

	return 0;
}