#include<iostream>
#include<vector>
#include<algorithm>
#include<map>

using std::cin; using std::cout; using std::endl;
using std::map;
using std::vector;
using std::string;
using Families = map<string, vector<string>>;

auto make_families()
{
	Families families;
	for(string ln; cout << "Last name:\n", cin >> ln && ln != "@q";)
		for(string cn; cout << "Childrem name:\n", cin >> cn && cn != "@q";)
			families[ln].push_back(cn);
	return families;
}

auto print(Families const& f)
{
	for(auto const& elem : f)
	{
		cout << elem.first << " : ";
		for(auto const&  i : elem.second)
			cout << i << " ";
		cout << endl;
	}
}

int main()
{
	auto f = make_families();
	print(f);
	
	return 0;
}
