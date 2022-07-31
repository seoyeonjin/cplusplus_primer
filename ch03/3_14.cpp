#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
	int i; 
	vector<int> result;
	while (cin >> i) {
		result.push_back(i);
	}
	return 0;
}