#include<iostream>
#include<algorithm>
#include<cctype>
#include<string>

using std::cout; using std::endl;using std::string;

int main()
{
    string s = "xiaodou...";
    s.erase(remove_if(s.begin(), s.end(), ispunct), s.end());

    cout << s <<endl;
    return 0;
}
