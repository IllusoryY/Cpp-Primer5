#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<functional>

using std::cin;using std::cout;using std::vector;using std::endl;using std::string;
using std::placeholders::_1;

bool checkVal(int const& iv, string::size_type sz)
{
    return iv >= sz;
}

int main()
{
    string word("xNova");
    vector<int> iv{1,2,3,4,5,6,7,8};

    //string::size_type sz = word.size();
    auto it =  find_if(iv.cbegin(), iv.cend(), bind(checkVal, _1, word.size()));

    if(it != iv.cend())
        cout << *it << endl;
    else
        cout << "Not find" << endl;

    return 0;
}
