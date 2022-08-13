#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;

// floating point
int main() {
	vector<string>s{ "1.1", "2.2", "34.2" };
	float sum = 0;
	for (string elem : s) {
		sum += stod(elem);
	}
	std::cout << "sum: " << sum << std::endl;
	return 0;
}

// int
/*int main() {
	vector<string>s{ "1", "2", "34" };
	int sum = 0; 
	for (string elem : s) {
		sum += stoi(elem);
	}
	std::cout << "sum: " << sum << std::endl;
	return 0;
}*/