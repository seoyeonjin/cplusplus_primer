#include <iostream>
#include <string>

int main() {
	int n = 12;
	std::allocator<std::string> alloc;
	auto const p = alloc.allocate(n);
	std::string s;
	std::string* q = p;
	while (std::cin >> s && q != p + n)
		alloc.construct(q++, s);// *q++ = s;
	const size_t size = q - p;
	
	while (q != p) {
		std::cout << *--q << " ";
		alloc.destroy(q);
	}
	alloc.deallocate(p, n);

	return 0;
}