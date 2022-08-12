#include <iostream>
#include <vector>

using std::vector;
using std::cout; 

int main() {

	vector<int> vec1{ 1,2,3,4 };
	vector<int> vec2{ 1,2,3};

	if (vec1 == vec2) {
		cout << "같음" << std::endl;
	}
	else
		cout << "다름" << std::endl;

	return 0;
}