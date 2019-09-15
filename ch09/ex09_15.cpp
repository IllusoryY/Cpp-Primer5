#include<list>
#include<vector>
#include<iostream>

using std::list;using std::vector;using std::cout;using std::endl;

bool compare_int_of_vector(const vector<int>& iv1, const vector<int>& iv2)
{
    if(iv1 == iv2)  return true;
    return false;
}

int main()
{
    vector<int> ivec1 = {1,2,3,4};
    vector<int> ivec2 = {0,2,3,4};
    vector<int> ivec3 = {1,2,3,4};

    cout << (compare_int_of_vector(ivec1, ivec2) ? "true" : "false") << endl;
    cout << (compare_int_of_vector(ivec1, ivec3) ? "true" : "false") << endl;

    return 0;
}
