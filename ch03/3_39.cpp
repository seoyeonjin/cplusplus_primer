#include <iostream>

using std::cout;
using std::endl;
using std::begin;
using std::end;


int main() {

	char a[] = { 'h','e','l','l','o','\0' };
	char b[] = { 'w','o','r','l','d','\0' };

	if (strcmp(a, b) == 0)
		cout << "����";
	else
		cout << "�ٸ�";
}
/*int main() {
	char a[] = { 'h','e','l','l','o','\0' };
	char b[] = { 'w','o','r','l','d','\0' };


	if (begin(a) - end(a) != begin(b) - end(b)) {
		cout << "�ٸ�";
		return 0;
	}
	for (char* p = begin(a), *p2 = begin(b); p != end(a), p2 != end(b); p++, p2++) {
		if (*p != *p2) {
			cout << "�ٸ�";
			return 0;
		}
	}
	cout << "����";

	return 0;
}*/