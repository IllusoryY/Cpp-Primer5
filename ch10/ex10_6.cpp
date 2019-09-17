#include<iostream>
#include<vector>
#include<algorithm>

using std::cin;using std::cout;using std::vector;using std::endl;

int main()
{
    vector<int> ivec = {1, 3, 4};

    fill_n(ivec.begin(), ivec.size(), 0);
    for(auto i : ivec)
        cout << i << endl;

    return 0;
}
