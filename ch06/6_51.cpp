#include <iostream>

using std::cout;
using std::endl;

void f() {
	cout << "함수 호출" << endl;
}

void f(int i) {
	cout << i << endl;
}

void f(int i, int j) {
	cout << i << " " << j << endl;
}

void f(double i, double j = 3.14) {
	cout << i << "  " << j << endl;
}

int main() {

	f(42);
	f(42, 0);
	f(2.56, 3.14);
}