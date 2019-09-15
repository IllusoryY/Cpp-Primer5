#include<list>
#include<vector>
#include<iostream>

using std::list;using std::vector;

int main()
{
    list<const char *> il = {"isme","baby","wangdefa"};
    vector<std::string> svec;
    svec.assign(il.cbegin(), il.cend());
    
    for(auto i : il)
        std::cout << i << " ";
    std::cout << std::endl;
    for(auto i : svec)
        std::cout << i << " ";
    std::cout << std::endl;

    return 0;
}
