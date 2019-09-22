#include<iostream>
#include<map>

using std::cin; using std::cout; using std::endl;
using Map = std::map<std::string, std::size_t>;

Map wordCount()
{
    Map m;
    for(std::string buf; cin >> buf;)
        ++m[buf];
    return m;
}

int main()
{
    auto result = wordCount();
    for(auto elem : result)
        cout << elem.first << " " << elem.second << endl;

    return 0;
}
