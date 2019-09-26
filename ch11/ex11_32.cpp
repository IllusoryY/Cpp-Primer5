#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<set>

using std::cin; using std::cout; using std::endl;
using std::multimap;
using std::vector;
using std::string;

int main()
{
    multimap<string, string> authors{
        { "xiaoliu", "666" },
        { "yang", "pixie" },
        { "leizi", "1988" },
        { "xiaoliu", "999" },
        { "yang", "suzhisanlian" },
        { "leizi", "biebie" }
    };

    std::map<string, std::multiset<string>> order_authors;
    for (const auto &author : authors)
        order_authors[author.first].insert(author.second);
    for (const auto &author : order_authors) 
    {
        std::cout << author.first << ": ";
        for (const auto &work : author.second)
            cout << work << " ";
        cout << endl;
    }
    return 0;
}
