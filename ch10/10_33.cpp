#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using std::vector;

int main(int argc, char** argv) {
	std::ifstream ifs(argv[1]); // ÆÄÀÏ name
	std::ofstream ofs_odd(argv[2]), ofs_even(argv[3]); // output file
	

	std::istream_iterator<int> in(ifs), eof;
	std::ostream_iterator<int> out_odd(ofs_odd, " "), out_even(ofs_even, "\n");

	vector<int> vec(in, eof);
	vector<int> vec_even; 

	auto even = std::stable_partition(vec.begin(), vec.end(), [](const int& i) {return i % 2; });
	std::copy(vec.begin(), even, out_odd);
	std::copy(even, vec.end(), out_even);

	for (auto elem : vec_even)
		std::cout << elem << " ";

	return 0;
}