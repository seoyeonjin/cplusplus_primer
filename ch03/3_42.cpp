#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main() {
	vector<int> a = { 1,2,3,4,5,6,7,8,9,10 };
	int b[10];
	for (int index = 0; index < 10; index++) {
		b[index] = a[index];
	}

	for (int elem : b) {
		cout << elem;
	}
	return 0;
}