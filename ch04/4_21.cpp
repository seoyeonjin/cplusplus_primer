#include <iostream>
#include <vector>

int main() {

	std::vector<int> vec = { 1,2,3,4 };
	for (int& elem : vec) {
		elem = (elem % 2 != 0 ? elem * 2 : elem);
	}
	for (int elem : vec) {
		std::cout << elem << " ";
	}
	
	return 0;
}