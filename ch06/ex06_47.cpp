#include<iostream>
#include<vector>

using std::vector;using std::cout;

void print(vector<int> &vec)
{
#ifndef NDEBUG
    cout << "vector size: " << vec.size() << std::endl;
#endif

    if(!vec.empty())
    {
        auto tmp = vec.back();
        vec.pop_back();
        print(vec);
        cout << tmp << " ";
    }
}

int main()
{
    vector<int> vec{1,2,3,4,5,6,7,8,9};

    print(vec);
    cout << std::endl;

    return 0;
}
