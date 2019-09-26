#include<iostream>
#include<vector>
#include<algorithm>

using std::cin;using std::cout;using std::vector;using std::endl;

//The output is 4 rather than 4.9 as expected.
//The reason is std::accumulate is a template function.The third parameter is _Tp __init
//when "0", an integer, had been spcified here, the compiler deduced _Tp as
//integer.
int main()
{
    vector<double> ivec = {1.0, 3.3, 4.1};

    cout << accumulate(ivec.cbegin(), ivec.cend(), 0) << endl;

    return 0;
}
