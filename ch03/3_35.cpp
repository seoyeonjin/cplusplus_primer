#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::end;

int main() {
	int a[10];

	int* b = a;
	int* e = end(a);

	for (int* p = b; p != e; ++p)
		*p = 0;

	for (int elem : a)
		cout << elem << " ";

	
	return 0;
}