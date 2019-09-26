//this code can't compile on GCC,please use Visual Studio 2015+ or Clang 3.6+
#include<string>
#include<iostream>
#include<iterator>
#include<cstddef>

using std::cout;using std::endl;using std::string;

void replace_with(string& s, const string& oldVal, const string& newVal)
{
    for(auto cur = s.begin(); cur <= s.end() - oldVal.size();)
    {
        if(oldVal == string{cur, cur + oldVal.size() })
        {
            cur = s.erase(cur, cur + oldVal.size());
            cur = s.insert(cur, newVal.begin(), newVal.end());
            cur += newVal.size();
        }
        else
            ++cur;
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
