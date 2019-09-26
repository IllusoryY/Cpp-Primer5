#include<list>
#include<vector>
#include<iostream>
#include<deque>

using std::list;using std::vector;using std::cout;using std::endl;
using std::deque;using std::string;

int main()
{
    list<string> sdeq;

    string buf;
    while(std::cin >> buf)
        sdeq.push_back(buf);

    for(auto iter = sdeq.cbegin(); iter != sdeq.end(); ++iter)
        cout << *iter << " ";
    cout << endl;

    return 0;
}
