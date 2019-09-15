#include<list>
#include<vector>
#include<iostream>

using std::list;using std::vector;using std::cout;using std::endl;

int main()
{
    list<int> ivec1 = {1,2,3,4};
    vector<int> ivec2 = {0,2,3,4};
    vector<int> ivec3 = {1,2,3,4};

    cout << (vector<int>(ivec1.begin(), ivec1.end()) == ivec2 ? "true" : "false") << endl;
    cout << (vector<int>(ivec1.begin(), ivec1.end()) == ivec3 ? "true" : "false") << endl;

    return 0;
}
