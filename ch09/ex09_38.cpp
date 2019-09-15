#include<iostream>
#include<vector>

using std::cout;using std::endl;using std::vector;

int main()
{
    vector<int> ivec;
    
    cout << "ivec's capacity is:" << ivec.capacity() << endl;
    
    int val;
    while(std::cin >> val)
    {
        ivec.push_back(val);
        cout << "ivec's capacity is:" << ivec.capacity() << endl;
    }

    return 0;
}
