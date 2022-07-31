#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main() {
	vector<int> ivec; 
	// ivec[0] = 42; //illegal
	// fix
	ivec.push_back(42);
	return 0;
}