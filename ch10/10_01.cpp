#include <iostream>
#include <algorithm>
#include <vector>

using std::vector;
using std::count;

int main() {
	vector<int> vec{ 1,2,3,4,5,6,6,6 };
	
	int result = count(vec.begin(), vec.end(), 6);
	
	std::cout << result;
	return 0;
}