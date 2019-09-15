#include<vector>
#include<iostream>

using std::vector;using std::cout;using std::endl;

int main()
{
    vector<int> ivec;

    cout << ivec.at(0) << endl;
    cout << ivec.front() << endl;
    cout << *ivec.begin() << endl;
    return 0;
}
