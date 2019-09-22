#include<iostream>
#include<map>
#include<algorithm>

using std::cin; using std::cout; using std::endl;
using Map = std::map<std::string, std::size_t>;
using std::remove_if;

std::string const& strip(std::string& word);

Map stripWordCount()
{
    Map m;
    for(std::string buf; cin >> buf;)
        ++m[strip(buf)];
    return m;
}

auto strip(std::string& word)->std::string const&
{
    for(auto& ch : word)
        ch = tolower(ch);
    word.erase(remove_if(word.begin(), word.end(), ispunct), word.end());
    
    return word;
}

int main()
{
    auto result = stripWordCount();
    for(auto elem : result)
        cout << elem.first << " : " << elem.second << endl;

    return 0;
}
