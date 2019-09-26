#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<utility>

using std::cin; using std::cout; using std::endl;
using std::map;
using std::vector;
using std::string;
using std::pair;
using Pv = vector<pair<string,int>>;

int main()
{
    //ex11_12
    Pv pv;
    string word;
    int val;

    while(cin >> word >> val)
        pv.push_back(make_pair(word, val));

    //ex11_13
    //pv.push_back(Pv(word, int));
    //pv.push_back({word, int});
    
    for(auto const& elem : pv)
        cout << elem.first << " : " << elem.second << endl;
    
	return 0;
}
