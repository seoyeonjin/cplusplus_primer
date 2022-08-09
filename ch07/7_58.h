#pragma once
#include <vector>

class Example {
public:
	static constexpr double rate = 6.5; //in-class initializer가 있는 멤버는 const 여야 함.
	static const int vecSize = 20;
	static std::vector<double> vec; //vecSize는 형식 이름이 아닙니다. 
};