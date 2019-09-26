#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using std::cin;using std::cout;using std::vector;using std::endl;using std::string;

inline
bool func(string const& elem)
{
    return elem.size() >= 5;
}

int main()
{
    vector<string> v = {"xNova1", "i", "problem", "ok", "monster"};
    auto it = partition(v.begin(), v.end(), func);

    for(auto first = v.cbegin(); first != it; ++first)
        cout << *first << " ";
    cout << endl;
    return 0;
}
