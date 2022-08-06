#include <iostream>
#include <vector>

using std::vector;

int f(int a, int b);

using pf = int(int, int);

vector<pf*> vec{ add, sub, mul, divide };

int add(int a, int b) {
	return a + b;
}

int sub(int a, int b) {
	return a - b;
}

int mul(int a, int b) {
	return a * b;
}

int divide(int a, int b) {
	if (b != 0) {
		return a / b;
	}
	return 0;
}

// store pointers