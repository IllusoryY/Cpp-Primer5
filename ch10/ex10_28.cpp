#include<iostream>
#include<vector>
#include<algorithm>
#include<list>
#include<iterator>

using std::cout;using std::vector;using std::endl;using std::list;

template<typename Sequence>
void print(Sequence const& seq)
{
    for (const auto& i : seq)
        std::cout << i << " ";
    std::cout << std::endl;
}

int main()
{
    list<int> lst;
    list<int> lst2;
    list<int> lst3;

    vector<int> vec{1,2,3,4,5,6,7,8,9};
    
    copy(vec.cbegin(), vec.cend(), back_inserter(lst));
    print(lst);

    copy(vec.cbegin(), vec.cend(), front_inserter(lst2));
    print(lst2);

    copy(vec.cbegin(), vec.cend(), inserter(lst3, lst3.begin()));
    print(lst3);

    return 0;
}
