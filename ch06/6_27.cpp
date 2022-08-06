#include <iostream>
#include <initializer_list>

int sum(const std::initializer_list<int>& il) {
	int sum = 0; 
	for (int i : il)
		sum += i;
	return sum;
}