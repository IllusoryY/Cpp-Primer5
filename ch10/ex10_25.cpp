#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<functional>

using std::cin;using std::cout;using std::vector;using std::endl;using std::string;
using namespace std::placeholders;

void elimDups(vector<string> &word)
{
    sort(word.begin(), word.end());
    auto end_unique = unique(word.begin(), word.end());
    word.erase(end_unique, word.end());
}

bool check_size(string const& s, size_t sz)
{
    return s.size() > sz;
}

void biggies(vector<string> &vs,std::size_t sz)
{
    elimDups(vs);

    //sort by size,but maintain alphabetical order for same size
    std::stable_sort(vs.begin(), vs.end(), [](string const& lhs, string const& rhs){
        return lhs.size() < rhs.size();
    });

    //get an iterator to the first one whose size() is <=sz
    auto wc = std::partition(vs.begin(), vs.end(), bind(check_size, _1, sz));

    //print the biggies
   // std::for_each(wc, vs.end(), [](string const& s){
    //    cout << s << " ";
    //});
    for(auto it = vs.cbegin(); it != wc;++it)
        cout << *it << " "; 
}

int main()
{
    vector<string> v
    {
        "1234", "1234", "1234", "wtf", "hame", "simple", "simple"
    };
    biggies(v, 3);
    cout << endl;
    return 0;
}
