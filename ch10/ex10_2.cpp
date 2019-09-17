#include<iostream>
#include<vector>
#include<algorithm>

using std::cin;using std::cout;using std::vector;using std::string;

int main()
{
    string buf;
    vector<string> svec;

    while(cin >> buf)
        svec.push_back(buf);

    int result = count(svec.cbegin(), svec.cend(), "xNova");

    cout << buf << (result > 1 ? " shows " : " show ") 
        << result << " time " << std::endl;
    return 0;
}
