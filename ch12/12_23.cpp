#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <string.h>

int main() {
	// 1
	char* con = new char[strlen("one" "two") + 1]();
	strcat(con, "one");
	strcat(con, "two");

	std::cout << con << std::endl;
	delete[] con; // 할당 해제

	std::string str{ "one" }, str2{ "two" };
	std::cout << str + str2 << std::endl;

	return 0;
}