#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <numeric>
#include "10_32.h"

using std::vector;
using std::string;

bool compareIsbn(const Sales_data& sd1, const Sales_data& sd2) {
	return sd1.isbn() < sd2.isbn();
}


int main() {
	Sales_data sd_1("a"), sd_2("b"), sd_3("ab"), sd_4("z");
	vector<Sales_data> vec{ sd_1, sd_2, sd_3, sd_4 };
    vector<Sales_data> vec_sum;
	std::sort(vec.begin(), vec.end(), compareIsbn);
    /*auto beg = vec.begin();
    while (beg != vec.end())
    {
        auto same_item = beg, trans_item = beg;
        while (trans_item != vec.end())
        {
            same_item = trans_item;
            trans_item = std::find(++trans_item, vec.end(), *beg);
        }
        vec_sum.push_back(std::accumulate(beg, ++same_item, Sales_data(beg->isbn())));
        beg = same_item;
    }*/

    for (auto beg = vec.cbegin(), end = beg; beg != vec.cend(); beg = end) {
        end = find_if(beg, vec.cend(), [beg](const Sales_data& item) { return item.isbn() != beg->isbn(); });
        std::cout << std::accumulate(beg, end, Sales_data(beg->isbn())) << std::endl;
    }

    for (auto elem : vec)
        std::cout << elem << " ";

	return 0;
}