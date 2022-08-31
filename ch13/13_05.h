#pragma once

#include <iostream>
#include <string>

using std::string;

class HasPtr {
public:
	HasPtr(const string& s = string()) :
		ps(new string(s)), i(0){}
	HasPtr(const HasPtr& hp) : ps(new string(*hp.ps)), i(hp.i){}
	// ù arg�� ref, hp.ps, hp.i
private:
	string* ps;
	int i;
};