#pragma once

#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;

const vector<string> month_vec{ "January", "February", "March", "April", "May", "June","July","August", "September", "October", "November", "December" };

class Date {

public:
	Date() = default;
	Date(const string&);
	void print_date();
	
private:
	unsigned year = 0000;
	unsigned month = 0;
	unsigned day = 0;
};

Date::Date(const string& str) {
	if ((str.find(' ')) != string::npos) {
		string month_str = str.substr(0, str.find(' '));
		std::cout << month_str << std::endl;

		for (int index = 0; index < month_vec.size(); ++index ) {
			if ((month_vec[index].find(month_str)) != string::npos)
				month = index + 1;
		}
		// std::cout << "month: " << month << std::endl;

		day = stoi(str.substr(str.find(' ') + 1, str.find(',')));
		// std::cout << "day: " << day << std::endl;

		year = stoi(str.substr(str.find(',') + 1));
		// std::cout << "year: " << year << std::endl;
	}
	
	if ((str.find('/')) != string::npos) {
		month = stoi(str.substr(0, str.find('/')));
		// std::cout << month << std::endl;

		day = stoi(str.substr(str.find('/') +1 , str.rfind('/')));
		// std::cout << day << std::endl;

		year = stoi(str.substr(str.rfind('/') + 1));
		// std::cout << year << std::endl;
	}
		
}

void Date::print_date() {
	std::cout << "year: " << year
		<< " month: " << month
		<< " day: " << day << std::endl;
}