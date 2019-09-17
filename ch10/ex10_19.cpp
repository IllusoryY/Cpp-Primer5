#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using std::cin;using std::cout;using std::vector;using std::endl;using std::string;

void elimDups(vector<string> &word)
{
    sort(word.begin(), word.end());
    auto end_unique = unique(word.begin(), word.end());
    word.erase(end_unique, word.end());
}

void biggies(vector<string> &vs,std::size_t sz)
{
    elimDups(vs);
    
    //get an iterator to the first one whose size() is <=sz
    auto wc = std::stable_partition(vs.begin(), vs.end(), [sz](string const& s){
        return s.size() <= sz;
    });

    //print the biggies
    for(; wc != vs.cend(); ++wc)
        cout << *wc << " ";
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
