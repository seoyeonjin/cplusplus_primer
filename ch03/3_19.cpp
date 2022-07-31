#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main() {
	vector<int> vec1;
	vector<int> vec2{ 0,0,0,0,0,0,0,0,0,0 };
	vector<int> vec3(10);

	for (int i = 0; i < 10; i++) {
		vec1.push_back(0);
	}
	return 0;
}