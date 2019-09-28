#include"Query.h"

TextQuery::TextQuery(ifstream& ifs) : svec(std::make_shared<vector<string>>())
{
    lineNo lineno(1);
    //逐行读入文本,单词的行号插入
    for(string line, word, text; getline(ifs, line); ++lineno)
    {
        svec->push_back(line);
        for(istringstream is(line); is >> word; text.clear())
        {
            std::remove_copy_if(word.begin(), word.end(), std::back_inserter(text), ispunct);
            //mss[word]->insert(lineno);   
            auto& nos = mss[text];
            if(!nos) nos.reset(new set<lineNo>);
            nos->insert(lineno);
        }
    }
}

QueryResult TextQuery::query(string const& s) const
{
    static shared_ptr<std::set<lineNo>> nodata(new set<lineNo>);
    auto ret = mss.find(s);
    if(ret != mss.end())
        return QueryResult(s, svec, ret->second);
    return QueryResult(s, svec, nodata);
}

ostream& print(ostream& out, const QueryResult& qr)
{
    out << "element occurs " << qr.lineno->size() <<(qr.lineno->size() > 1 ? " times" : " time") << endl;
    for(auto l : *qr.lineno)
    {
        out << "\t(line " << l << ") " << qr.svec->at(l -1) << endl;
    }
    return out;
}
