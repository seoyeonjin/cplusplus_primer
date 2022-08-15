#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <fstream>

using std::vector;

int main() {
	std::istream_iterator<int> in(std::cin), eof;
	std::ostream_iterator<int> out(std::cout, " ");

	vector<int> vec(in, eof);

	std::sort(vec.begin(), vec.end());
	std::unique_copy(vec.begin(), vec.end(), out);
	return 0;
}