#pragma once
#include <iostream>
#include <string>

class Date {
public:
	Date() = default;
	Date(int i) : Date(i, 0, 0) {};
	Date(int i, int j, int k) : month(i), day(j), year(k) {};
	Date(std::istream& is) {
		is >> month >> day >> year;
	}
private:
	int month;
	int day;
	int year;
};

// 날짜 표시 class
// 입력받으면 초기화