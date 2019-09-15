#include<string>
#include<vector>
#include<iostream>

using std::string;using std::vector;using std::cout;using std::endl;

int main()
{
    vector<char> cvec{'y','a','n','g'};
    string word(cvec.cbegin(), cvec.cend());

    cout << word << endl;

    return 0;
}
