#include <iostream>
#include <vector>

using std::vector;

int main() {
	vector<int> vec{ 1,2,3,4,5,6,7,8 };

	for (vector<int>::const_reverse_iterator it = vec.crbegin(); it != vec.crend(); ++it)
		std::cout << *it << " ";

	return 0;
}