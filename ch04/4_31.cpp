#include <iostream>
#include <string>
#include <vector>

int main() {
	std::vector<int> ivec = { 1,2,3,4 };
	std::vector<int>::size_type cnt = ivec.size();
	for (std::vector<int>::size_type ix = 0; ix != ivec.size(); ix++, cnt--)
		ivec[ix] = cnt;

	for (auto item : ivec) {
		std::cout << item << " ";
	}
	return 0;
}