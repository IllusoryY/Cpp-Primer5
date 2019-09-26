#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include"../ch01/Sales_item.h"

using std::cin;using std::cout;using std::vector;using std::endl;using std::string;

inline
bool compareIsbn(Sales_item const& lhs, Sales_item const& rhs)
{
    return lhs.isbn < rhs.isbn;
}

int main()
{
    Sales_item trans;
    vector<Sales_item> vec;
    
    //将交易记录存到vector
    while(std::cin >> trans)
        vec.push_back(trans);
    
    //找到同一isbn的交易记录并求和
    sort(vec.begin(), vec.end(), compareIsbn);
    for(auto beg = vec.begin(), end = beg; beg != vec.end(); beg = end)
    {
        end = find_if(beg, vec.end(), [beg](Sales_item const& item){ return item.isbn != beg->isbn; });
        cout << accumulate(beg, end, Sales_item(beg->isbn)) << endl;
    }
    return 0;
}
