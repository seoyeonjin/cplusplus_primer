#include <iostream>

// 9
/*
int main() {

	int sum = 0, val;

	for (val = 50; val <= 100; ++val){
		sum += val;
	}
	std::cout << "Sum of 50 to 100 inclusive is "
		<< sum << std::endl;

	return 0;
}*/

#include <iostream>

int main() {

	int sum = 0, val = 10;
	for (val = 10; val >= 1; --val) {
		sum += val;
	}
	std::cout << "Sum of 10 to 1 inclusive is "
		<< sum << std::endl;

	return 0;
}