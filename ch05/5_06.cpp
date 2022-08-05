#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;

int main() {
	const vector<string> scores = { "F", "D", "C", "B", "A", "A++" };

	string lettergrade;
	int grade = 99;
	if (grade < 60)
		lettergrade = scores[0];
	else {
		lettergrade = scores[(grade - 50) / 10];
		if (grade != 100)
			lettergrade = grade % 10 > 7 ? lettergrade + '+' : grade % 10 < 3 ? lettergrade + '-' : lettergrade;
	}
	std::cout << lettergrade << std::endl;

	return 0;
}