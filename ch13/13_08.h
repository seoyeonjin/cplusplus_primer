#pragma once
#include <iostream>
#include <string>

using std::string;

class HasPtr {
public:
	HasPtr(const string& s = string()) :
		ps(new string(s)), i(0) {}
	HasPtr(const HasPtr& hp) : ps(new string(*hp.ps)), i(hp.i) {}
	HasPtr& operator=(const HasPtr& rhs) {
		string* temp = new string(*rhs.ps);
		delete ps;
		ps = temp;
		i = rhs.i;
		return *this;
	}
	// Ã¹ arg´Â ref, hp.ps, hp.i
private:
	string* ps;
	int i;
};