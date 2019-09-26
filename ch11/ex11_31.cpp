#include<iostream>
#include<vector>
#include<algorithm>
#include<map>

using std::cin; using std::cout; using std::endl;
using std::multimap;
using std::vector;
using std::string;

int main()
{
    multimap<string, string> authors{
        { "alan", "DMA" },
        { "pezy", "LeetCode" },
        { "alan", "CLRS" },
        { "wang", "FTP" },
        { "pezy", "CP5" },
        { "wang", "CPP-Concurrency" }
    };

    string buf;
    cin >> buf;
    for(auto ret = authors.find(buf); ret != authors.end();)
    {
            authors.erase(ret);
            ret = authors.find(buf); 
    }
    
	
    for(auto const& elem : authors)
        cout << elem.first << " " << elem.second << endl;
	return 0;
}
