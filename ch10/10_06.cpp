#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;
using std::fill_n;

int main() {
	vector<int> v{ 1,2,3,4,5,6 };

	fill_n(v.begin(), v.size(), 1);

	for (int elem : v) {
		std::cout << elem << std::endl;
	}
	return 0;
}