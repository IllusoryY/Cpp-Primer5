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

    //sort by size,but maintain alphabetical order for same size
    std::stable_sort(vs.begin(), vs.end(), [](string const& lhs, string const& rhs){
        return lhs.size() < rhs.size();
    });

    //get an iterator to the first one whose size() is >=sz
    auto wc = std::find_if(vs.begin(), vs.end(), [sz](string const& s){
        return s.size() >= sz;
    });

    //print the biggies
    std::for_each(wc, vs.end(), [](string const& s){
        cout << s << " ";
    });
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
