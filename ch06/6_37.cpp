#include <iostream>
#include <string>

using std::string;

using arr = string[10];

arr& f1(arr& arrp);

auto f2(arr& arrp);

string arr[10];
decltype(arr)& f3(arr& arrp);