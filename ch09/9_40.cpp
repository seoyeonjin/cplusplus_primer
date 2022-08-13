// 256 word
// size - 384, capacity - 1024

// 512 word
// size - 768, capacity - 1024

// 1000 word
// size - 1500, capacity - 1536

// 1048 word
// size - 1572, capacity - 2304

#include <iostream>
#include <vector>
#include <string>

using std::string;
using std::vector; 

int main() {

	vector<string> vec;
	vec.reserve(1024);
	for (int i = 0; i < 1000; i++) {
		vec.push_back("hello");
	}
	std::cout << vec.size() << " " << vec.capacity() << std::endl;

	vec.resize(vec.size() + vec.size() / 2);

	std::cout << vec.size() << " " << vec.capacity() << std::endl;

	return 0;
}