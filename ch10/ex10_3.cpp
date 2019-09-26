#include<iostream>
#include<vector>
#include<algorithm>

using std::cin;using std::cout;using std::vector;using std::endl;

int main()
{
    vector<int> ivec = {1,2,3,4,5,67,9,};

    cout << accumulate(ivec.cbegin(), ivec.cend(), 0) << endl;

    return 0;
}
