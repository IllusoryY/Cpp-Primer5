//this code can't compile on GCC,please use Visual Studio 2015+ or Clang 3.6+
#include<string>
#include<iostream>
#include<iterator>
#include<cstddef>

using std::cout;using std::endl;using std::string;

void replace_with(string& s, const string& oldVal, const string& newVal)
{
    for(size_t pos = 0; pos <= s.size() - oldVal.size();)
    {
        if(s[pos] == oldVal[0] && s.substr(pos, oldVal.size()) == oldVal)
        {
            s.replace(pos, oldVal.size(), newVal);
            pos += newVal.size();
        }
        else
            ++pos;
    }
}

int main()
{
    string s{"tho young too simple thru"};
    replace_with(s, "tho", "though");
    replace_with(s, "thru", "through");
    cout << s << endl;

    return 0;
}
