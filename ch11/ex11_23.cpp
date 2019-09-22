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
    multimap<string, string> families;
    for (string lname, cname; cin >> cname >> lname; families.emplace(lname, cname));
    for (auto const& family : families)
        std::cout << family.second << " " << family.first << endl;
	
	return 0;
}
