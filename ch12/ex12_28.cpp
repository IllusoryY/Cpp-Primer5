#include<iostream>
#include<map>
#include<set>
#include<vector>
#include<fstream>
#include<sstream>
#include<cctype>
#include<algorithm>

using namespace std;

int main()
{
    cout << "Please enter the file name:";
    string filename;
    cin >> filename;
    ifstream ifs(filename);
    if(!ifs)
    {
        cout << "The file can't find" << endl;
        return -1;
    }

    using LineNo = vector<string>::size_type;
    vector<string> svec;
    map<string, set<LineNo>> result;

    LineNo lineno = 1;
    //处理文本内容
    for(string line, word; getline(ifs, line); ++lineno)
    {
        svec.push_back(line);
        for(istringstream iss(line); iss >> word;)
        {
            remove_if(word.begin(), word.end(), 
                    [](char c){ return std::ispunct(c); });
            result[word].insert(lineno);
        }
    }
    
    //查询
    while(true)
    {
        cout << "Please enter the word that you wanna search, enter q to quit" << endl;
        string word;
        cin >> word;
        if(!cin || word == "q") break;
        auto ret = result.find(word);

        if(ret != result.end())
        {
            cout << "element occurs " << ret->second.size() << (ret->second.size() > 1 ? " times" : " time") << endl;
            for(auto no : ret->second)
            {
             cout << "\t(line " << no << ") " << svec[no -1] << endl;
            }
        }
        else
        {
            cout << "The word occurs 0 time" << endl;
        }

    }

    return 0;
}
