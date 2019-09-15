#include<list>
#include<vector>
#include<iostream>

using std::list;using std::vector;

int main()
{
    list<int> il = {0,1,2,3,4,5,6,7};

    vector<int> iv(il.begin(), il.end()); 
    vector<int> iv2(iv);

    for(const auto &val : iv2)
        std::cout << val << std::endl;
    return 0;
}
