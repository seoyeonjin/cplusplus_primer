#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main() {
	unsigned grade;
	vector<unsigned> scores(11);

	while (cin >> grade) {
		if (grade <= 100)
			++scores[grade / 10];
	}

	for (auto score : scores)
		cout << score << " ";
	cout << endl;
	return 0;
}