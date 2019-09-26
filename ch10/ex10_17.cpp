#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include"../ch07/ex07_26.h"

using std::cin;using std::cout;using std::vector;using std::endl;using std::string;

int main()
{
    Sales_data d1("aa"), d2("aaaa"), d3("aaa"), d4("z"), d5("aaaaz");
    std::vector<Sales_data> v{ d1, d2, d3, d4, d5 };

    stable_sort(v.begin(), v.end(),[](Sales_data const& lhs, Sales_data const& rhs){
        return lhs.isbn().size() < rhs.isbn().size();
    });
    for(auto const& elem : v)
        print(cout, elem),cout << endl;
    return 0;
}
