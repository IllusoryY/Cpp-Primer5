#include<vector>
#include<iostream>
#include<list>

using std::vector;using std::cout;using std::endl;using std::list;

int main()
{
    int ia[] = {0,1,1,2,3,5,8,13,21,55,89};

    vector<int> iv;
    list<int> il;

    //init
    for(auto first = std::begin(ia); first != std::end(ia); ++first)
    {
        iv.push_back(*first);
        il.push_back(*first);   
    }

    //remove even
    for(auto first = iv.begin(); first != iv.end();)
    {
        if(*first % 2)
            ++first;
        else
        {
            first = iv.erase(first);
        }
    }

    //remove odd
    for(auto first = il.begin(); first != il.end();)
    {
        if(*first % 2)
        {
            first = il.erase(first);
        }
        else
            ++first;
    }

    //print
    cout << "odd int of vector:";
    for(auto i : iv)
        cout << i << " ";
    cout << endl;
    
    cout << "even int of list:";
    for(auto i : il)
        cout << i << " ";
    cout << endl;
    return 0;
}
