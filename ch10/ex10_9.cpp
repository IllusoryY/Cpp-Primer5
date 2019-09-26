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
    print(word);
    sort(word.begin(), word.end());

    auto end_unique = unique(word.begin(), word.end());
    print(word);

    word.erase(end_unique, word.end());
    print(word);
}

int main()
{
    vector<string> svec = {"a", "v", "s", "g", "g", "s", "a", "v", "e", "a"};
    
    elimDups(svec);
    return 0;
}
