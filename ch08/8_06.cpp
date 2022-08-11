#include <iostream>
#include <string>
#include <fstream>
#include "ch07/7_26.h"

int main(int argc, char **argv) {

	Sales_data total;
	std::ifstream input(argv[1]);

	if (read(input,total)) {
		Sales_data trans;
		while (read(input, trans)) {
			if (total.isbn() == trans.isbn()) {
				total.combine(trans);
			}
			else {
				print(std::cout, total) << std::endl;
			}
		}
		print(std::cout, total) << std::endl;
	}
	else {
		std::cerr << "No data?! " << std::endl;
		return -1;
	}
	return 0;
}
