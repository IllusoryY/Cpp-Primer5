#include<iostream>
#include<list>
#include<algorithm>
#include<string>

using std::cin;using std::cout;using std::list;using std::endl;using std::string;

template<typename T>
auto print(T const& vec)->std::ostream&
{
    for(auto const& i : vec)
        cout << i << " ";
    return cout << endl;
}

void elimDups(list<string> &word)
{
    print(word);
    word.sort();

    auto end_unique = unique(word.begin(), word.end());
    print(word);

    word.erase(end_unique, word.end());
    print(word);
}

int main()
{
    list<string> svec = {"a", "v", "s", "g", "g", "s", "a", "v", "e", "a"};
    
    elimDups(svec);
    return 0;
}
