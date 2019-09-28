#ifndef QUERY_H
#define QUERY_H

#include<memory>
#include<fstream>
#include<sstream>
#include<map>
#include<set>
#include<cctype>
#include<algorithm>
#include<iostream>
#include<vector>
using std::vector;
using std::ostream;
using std::shared_ptr;
using std::ifstream;
using std::istringstream;
using std::map;
using std::set;
using std::string;
using std::endl;

class QueryResult;
class TextQuery
{
public:
    using lineNo = vector<string>::size_type;
    TextQuery(ifstream& ifs);
    QueryResult query(string const& s) const;
private:
    shared_ptr<vector<string>> svec;
    map<string, shared_ptr<set<lineNo>>> mss;
};

class QueryResult
{
public:
    friend ostream& print(ostream& out, const QueryResult& qr);
    QueryResult(string const& s, shared_ptr<vector<string>> vec, shared_ptr<set<TextQuery::lineNo>> set)  
        : str(s), svec(vec), lineno(set) {}
private:
    string str;
    shared_ptr<vector<string>> svec;
    shared_ptr<set<TextQuery::lineNo>> lineno;
};

ostream& print(ostream& out, const QueryResult& qr);
#endif
