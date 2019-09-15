#include<list>
#include<vector>
#include<iostream>
#include<deque>

using std::list;using std::vector;using std::cout;using std::endl;
using std::deque;using std::string;using std::cin;

int main()
{
    list<int> il;
    deque<int> od;
    deque<int> ed;
    
    for(int val; cin >> val; il.push_back(val));
    
    for(auto first = il.cbegin(); first != il.cend(); ++first)
    {
        (*first % 2 ? od :ed).push_back(*first);
    }

    for(auto i : od)
        cout << i << " ";
    cout << endl;
    for(auto i : ed)
        cout << i << " ";
    cout << endl;


    return 0;
}
