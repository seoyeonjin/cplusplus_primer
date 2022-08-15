#include <iostream>
#include <vector>

using std::vector;

int main() {
	vector<int> vec{ 1,2,3,4,5,6,7,8,9 };

	for (vector<int>::const_iterator it = vec.cend() -1; it >= vec.cbegin() ; --it) {
		std::cout << *it << std::endl;
		if (it == vec.cbegin()) break;
	}
	return 0;
}