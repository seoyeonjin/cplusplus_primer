#pragma once
#include <vector>

class Example {
public:
	static constexpr double rate = 6.5; //in-class initializer�� �ִ� ����� const ���� ��.
	static const int vecSize = 20;
	static std::vector<double> vec; //vecSize�� ���� �̸��� �ƴմϴ�. 
};