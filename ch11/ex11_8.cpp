#include<iostream>
#include<vector>
#include<algorithm>
#include<map>

using std::cin; using std::cout; using std::endl;
using std::map;
using std::vector;
using std::string;

int main()
{
    string word;
    vector<string> svec;

    while(cin >> word)
    {
        if(find(svec.begin(), svec.end(), word) == svec.end())
            svec.push_back(word);
    }

    for(auto const& s : svec)
        cout << s << " ";
    cout << endl;
	return 0;
}
