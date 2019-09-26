#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using std::cin;using std::cout;using std::vector;using std::endl;using std::string;

std::size_t bigerThan6(vector<string> const& v)
{
    return std::count_if(v.cbegin(), v.cend(), [](string const& s){
        return s.size() > 6;
    });
}
