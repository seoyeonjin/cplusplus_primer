#pragma once
#include <iostream>
#include <string>

class Date {
public:
	Date() = default; 
	Date(int i, int j, int k) : month(i), day(j), year(k) {};
	Date(std::istream& is) {
		is >> month >> day >> year;
	}
private:
	int month;
	int day;
	int year;
};

// ��¥ ǥ�� class
// �Է¹����� �ʱ�ȭ