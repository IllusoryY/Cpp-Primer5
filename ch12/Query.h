#include<vector>
#include<map>
#include<string>
#include<fstream>
#include<set>
#include<iostream>
#include<algorithm>
#include<cctype>
#include<sstream>

using std::ifstream; using std::string; using std::vector; using std::map; using std::cout; using std::endl;
using std::remove_if;using std::istringstream;using std::set;

class QueryResult;

class TextQuery
{
public:
    friend QueryResult;
    TextQuery() = default;
    TextQuery(ifstream& ifs) 
    {   
        string text;
        //处理每行输入文本
        while(getline(ifs, text))
        {
            sv.push_back(text);
            //处理每个单词，转换为小写，去掉标点
            string word;
            istringstream is(text);
            while(is >> word)
            {
                for(auto& ch : word)
                    ch = tolower(ch);
                word.erase(remove_if(word.begin(), word.end(), ispunct), word.end());
                ms[word].insert(sv.size());
            }
        }
    }
    map<string, set<size_t>>::const_iterator query(string& s)
    {
        for(auto& ch : s)
            ch = tolower(ch);
        auto ret = ms.find(s);
        return ret;
    }
private:
    vector<string> sv;
    map<string, set<size_t>> ms;
};

class QueryResult
{
public:
     void print(std::ostream& os, map<string, set<size_t>>::const_iterator ret)
    {
        if(ret != TextQuery::ms.end())
        {
            os << "element occurs " << ((ret->second).size() > 1 ? " times" : "time" << endl;
            for(auto first = (ret->second).begin(); first != (ret->second).end(); ++first)
                os << "(line " << *first << ") " << sv[*first -1] << endl;
        }
        else
        {
            os << "Can't find the word" << endl;
        }
    }  
};
