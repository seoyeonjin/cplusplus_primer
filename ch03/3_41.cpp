#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::begin;
using std::end;
using std::vector;

int main() {
	int a[] = { 1,2,3,4,5,6,7,8,9,10 };

	vector<int> b(begin(a), end(a));


	for (int elem : b) {
		cout << elem;
	}
	return 0;
}
