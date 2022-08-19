
#include <iostream>
#include <map>
#include <string>
#include <typeinfo>

int main()
{
    std::map<int, std::string> m = { { 1,"ss" },{ 2,"sz" } };
    std::map<int, std::string>::key_type type_to_subscript = 1;
    using KeyType = std::map<int, std::string>::key_type;
    std::map<int, std::string>::mapped_type type_to_return = m[type_to_subscript];
    return 0;
}