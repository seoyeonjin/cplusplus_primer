#include <iostream>

int main() {
	int i = 5;
	auto add = [i](int one) {return one + i; };
}