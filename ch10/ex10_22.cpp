#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<functional>

using std::cin;using std::cout;using std::vector;using std::endl;using std::string;
using std::placeholders::_1;

bool checkSize(string const& s, string::size_type sz)
{
    return s.size() >= sz;
}

int main()
{
    vector<string> v{
        "alan","moophy","1234567","1234567","1234567","1234567"
    };
    cout << count_if(v.cbegin(), v.cend(), bind(checkSize, _1, 6)) << endl;

    return 0;
}
