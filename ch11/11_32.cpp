#include <iostream>
#include <set>
#include <map>
#include <string>

using std::string;
using std::map;

int main() {

    std::multimap<string, string> authors{
        { "alan", "DMA" },
        { "pezy", "LeetCode" },
        { "alan", "CLRS" },
        { "wang", "FTP" },
        { "pezy", "CP5" },
        { "wang", "CPP-Concurrency" }
    };

    string author = "alan";
    string work = "DMA";

    map<string, std::multiset<string>> order_authors; //중복된 부분은 works로 정리
    for (const auto& author : authors)
        order_authors[author.first].insert(author.second);

    for (const auto& author : order_authors) {
        std::cout << author.first << ": ";
        for (const auto& work : author.second)
            std::cout << work << " ";
        std::cout << std::endl;
    }
        
    return 0;
}