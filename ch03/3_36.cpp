#include <iostream>
#include <vector>

using std::cout;
using std::end;
using std::begin;
using std::vector;

int main() {
	vector<int> a = { 1,2,3,4 };
	vector<int> b = { 1,2,3,5 };

	if (a == b) {
		cout << "같음";
	}
	else {
		cout << "다름";
	}

	return 0;
}
/*int main() {
	int a[] = { 1,2,3,4 };
	int b[] = { 1,2,3 };

	if (begin(a) - end(a) != begin(b) - end(b)) {
		cout << "다름";
		return 0;
	}
	for (int* p = begin(a), *p2 = begin(b); p != end(a), p2 != end(b); p++, p2++) {
		if (*p != *p2) {
			cout << "다름";
			return 0;
		}
	}
	cout << "같음";

	return 0;
}*/