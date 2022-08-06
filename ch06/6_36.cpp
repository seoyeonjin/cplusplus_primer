#include <iostream>
#include <string>

using std::string;

string(&f(string(&arr)[10]))[10];