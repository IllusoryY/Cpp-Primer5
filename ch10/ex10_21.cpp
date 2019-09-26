#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using std::cin;using std::cout;using std::vector;using std::endl;using std::string;

int main()
{
    int val = 5;
    auto result = [&val]()->bool{
        while(val > 0)
            --val;
        return true;
    };

    result();
    cout << val << endl;

    return 0;
}
