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
		string line;
		while (std::getline(input, line))
			vec.push_back(line);
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

/*int main() {
	cout << "hi!" << endl;
	cout << "hi!" << std::flush;
	cout << "hi!" << std::ends;
	cout << "hi!" << endl;
	cout  << std::unitbuf; //¹Ù·Î flushed
	cout << std::nounitbuf; // buffering
}*/