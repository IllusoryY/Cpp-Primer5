#include<iostream>
#include<vector>
#include<algorithm>
#include<list>
#include<iterator>
#include<fstream>

using std::cout;using std::vector;using std::endl;using std::list;using std::string;

template<typename Sequence>
void print(Sequence const& seq)
{
    for (const auto& i : seq)
        std::cout << i << " ";
    std::cout << std::endl;
}

int main()
{
    vector<int> v{1,2,3,4,5,6,7};

    for(auto r_iter = v.crbegin(); r_iter != v.crend(); ++r_iter)
        cout << *r_iter << " ";
    cout << "============34============" << endl;

    for(auto iter = (--v.cend()); iter != (--v.cbegin()); --iter)
        cout << *iter << " ";
    cout << "============35============" << endl;

    list<int> il{1,2,3,0,1,2,3,0};
    auto last_zero = find(il.crbegin(), il.crend(), 0);
    cout << std::distance(last_zero, il.crend()) << " "; 
    cout << "============36============" << endl;

    vector<int> v2{1,2,3,4,5,6,7,8,9,10};
    list<int> il2;
    copy(v2.crbegin() + 2, v2.crend() - 3, back_inserter(il2));
    print(il2);
 
    return 0;
}
