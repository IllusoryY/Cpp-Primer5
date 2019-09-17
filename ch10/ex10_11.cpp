#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using std::cin;using std::cout;using std::vector;using std::endl;using std::string;

template<typename T>
auto print(T const& vec)->std::ostream&
{
    for(auto const& i : vec)
        cout << i << " ";
    return cout << endl;
}

void elimDups(vector<string> &word)
{
    sort(word.begin(), word.end());
    auto end_unique = unique(word.begin(), word.end());
    word.erase(end_unique, word.end());
}

inline
bool isShorter(string const& t1, string const& t2)
{
    return t1.size() < t2.size();
}

int main()
{
    vector<string> svec = {"1234", "1234", "1234", "Hi", "xNova", "james"};
    
    elimDups(svec);
    stable_sort(svec.begin(), svec.end(), isShorter);
    print(svec);

    return 0;
}
