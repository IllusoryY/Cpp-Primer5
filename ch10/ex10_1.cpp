#include<iostream>
#include<vector>
#include<algorithm>

using std::cin;using std::cout;using std::vector;

int main()
{
    int val;
    vector<int> ivec;

    while(cin >> val)
        ivec.push_back(val);

    int result = count(ivec.cbegin(), ivec.cend(), 3);

    cout << val << (result > 1 ? " shows " : " show ") 
        << result << " time " << std::endl;
    return 0;
}
