#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main() {

	int sum = 0, val, val1, val2;
	cout << "Enter two number: ";

	cin >> val1 >> val2;
	val = val1;
	while (val <= val2) {
		sum += val;
		++val;
	}
	cout << "Sum of " << val1 << " to " << val2 << " inclusive is "
		<< sum << endl;

	return 0;
}

/*int main() {

	int sum = 0, val = 10;
	while (val >= 1) {
		sum += val;
		--val;
	}
	cout << "Sum of 10 to 1 inclusive is "
		<< sum << endl;

	return 0;
}*/

/*int main() {

	int sum = 0, val = 50;
	while (val <= 100) {
		sum += val;
		++val;
	}
	cout << "Sum of 50 to 100 inclusive is "
		<< sum << endl;

	return 0;
}*/