#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {

	vector<int> vec = {1,2,3,4,5,6,7,8,9,10};

	for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
		*it = *it * 2;
	}
	
	for (int i : vec) {
		cout << i << " ";
	}
	return 0;
}