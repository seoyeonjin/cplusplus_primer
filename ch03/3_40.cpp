#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

using std::string;
using std::end;
using std::begin;

int main() {
	char a[] = { 'h','e','l','l','o','\0' };
	char b[] = { 'w','o','r','l','d','\0' };
	char c[11];
	strcpy(c, a);
	strcat(c, b);

	for (char* p = begin(c); p != end(c); ++p)
		std::cout << *p;
	return 0;
}