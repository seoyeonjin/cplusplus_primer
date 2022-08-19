#include <iostream>
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

    auto found = authors.find(author);
    auto count = authors.count(author);

    while (count) {
        if (found->second == work) {
            authors.erase(found);
            break;
        }
        ++found;
        --count;
    }

    return 0;
}