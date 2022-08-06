#include <iostream>

void swap(const int*& i, const int*& j) {
	const int* temp = i;
	i = j;
	j = temp;
}

int main() {

	const int i = 1, j = 2;
	const int* ip = &i;
	const int* jp = &j;
	swap(ip, jp);

	std::cout << *ip << " " << *jp << std::endl;
}