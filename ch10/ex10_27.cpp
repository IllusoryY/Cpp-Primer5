#include<iostream>
#include<vector>
#include<algorithm>
#include<list>
#include<iterator>

using std::cin;using std::cout;using std::vector;using std::endl;using std::string;
using std::list;

int main()
{
    list<int> lst;
    vector<int> vec{11,11,3,3,5,5,7,7,8,9};
    
    std::unique_copy(vec.cbegin(), vec.cend(), back_inserter(lst));
    for(auto const elem : lst)
        cout << elem << " ";
    cout << endl;

    return 0;
}
