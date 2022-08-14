#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <numeric>

using std::accumulate;
using std::string;
using std::vector;

int main() {

	vector<double> vec{ 1.1, 2.1,3.3 };
	double sum = accumulate(vec.cbegin(), vec.cend(), 0.0);

	std::cout << sum << std::endl;

	return 0;
}