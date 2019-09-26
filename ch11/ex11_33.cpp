#include<map>
#include<string>
#include<stdexcept>
#include<fstream> 
#include<iostream>
#include<sstream>

using std::cin; using std::cout; using std::endl;
using std::map;
using std::ifstream;
using std::string;
using std::istringstream;

map<string, string> buildMap(ifstream& map_file);
string const& transform(string const& s, map<string, string> const& m);

void word_transform(ifstream& map_file, ifstream& ifs)
{
    auto trans_map = buildMap(map_file);
    string text;
    while(getline(ifs, text))
    {
        istringstream is(text);
        string word;
        bool firstWord = true;
        while(is >> word)
        {
            if(firstWord)
                firstWord = false;
            else
                cout << " ";
            cout << transform(word, trans_map);
        }
    }
}

map<string, string> buildMap(ifstream& map_file)
{
    map<string, string> m;
    for(string word, trans_word; map_file >> word && getline(map_file, trans_word);)
    {
        if(trans_word.size() > 1)
            m[word] = trans_word.substr(1);
    }
    return m;
}

string const& transform(string const& s, map<string, string> const& m)
{
    auto ret = m.find(s);
    if(ret != m.end())
        return ret->second;
    return s;
}

int main()
{
    ifstream ifs_map("trans_file.txt"), ifs_content("input_file.txt");
    if (ifs_map && ifs_content) word_transform(ifs_map, ifs_content);
    else std::cerr << "can't find the documents." << std::endl;

    return 0;
}
