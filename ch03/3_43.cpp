#include <iostream>

using std::cout;
using std::endl;

int main() {
	int ia[2][2] = { {1,2},{3,4} };

	for (int(&p)[2] : ia) {
		for (int elem : p)
			cout << elem << " ";
	}
	cout << endl;
	for (int(*p)[2] = ia; p != ia + 2; ++p)
		for (int* p2 = *p; p2 != *p + 2; ++p2)
			cout << *p2 << " ";
	cout << endl;
	for (int i = 0; i != 2; ++i)
		for (int j = 0; j != 2; ++j)
			cout << ia[i][j] << " ";
	return 0;
}