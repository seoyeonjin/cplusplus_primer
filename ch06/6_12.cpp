#include <iostream>

void swap(int& v1, int& v2) {
	int temp = v1;
	v1 = v2;
	v2 = temp;
}

int main() {

	int v1 = 2;
	int v2 = 4;
	swap(v1, v2);

	std::cout << v1 << " " << v2 << std::endl;
	return 0;
}