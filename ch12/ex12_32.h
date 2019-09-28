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

class StrBlob
{
public:
    typedef vector<string>::size_type size_type;
    StrBlob(make_shared<vector<string>>()){};
    StrBlob(std::initializer_list<string> il) : data(make_shared<vector<string>>(il)) {};
    size_type size() const { return data->size(); }
    void push_back(const string& t) { data->push_back(t); }
private:
    shared_ptr<vector<string>> data;
};

class TextQuery
{
public:
    using lineNo = vector<string>::size_type;
    TextQuery(ifstream& ifs);
    QueryResult query(string const& s) const;
private:
    StrBlob svec;
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
    StrBlob svec;
    shared_ptr<set<TextQuery::lineNo>> lineno;
};

ostream& print(ostream& out, const QueryResult& qr);
#endif
