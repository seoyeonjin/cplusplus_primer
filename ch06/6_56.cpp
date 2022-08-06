#include <iostream>
#include <vector>

using std::vector;

int f(int a, int b);

using pf = int(int, int);


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


int main() {
	vector<pf*> vec{ add, sub, mul, divide };

	for (auto f : vec)
		std::cout << f(1, 2) << std::endl;
}