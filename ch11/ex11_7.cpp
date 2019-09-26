#include<iostream>
#include<map>
#include<algorithm>
#include<vector>

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;
using std::map;
using Families = map<string, vector<string>>;

auto make_families()
{
    Families families;
    for(string ln; cout << "last name:\n", cin >> ln && ln != "@q";)
        for(string cn; cout << "Childrem name:\n", cin >> cn && cn != "@q";)
            families[ln].push_back(cn);
    return families;
}

void print(Families const& f)
{
    for(auto const& elem : f)
    {
        cout << elem.first << " : " ;
        for(auto const& name : elem.second)
            cout << name << " ";
        cout << endl;
    }
}

int main()
{
    auto families = make_families();
    print(families);
    return 0
}
