#ifndef EX_13_8_H
#define EX_13_8_H

#include<string>

class HasPtr
{
public:
    HasPtr(const std::string& s = std::string()) :
        ps(new std::string(s)), i(0) {}
    HasPtr(HasPtr const& rhs) :
        ps(new std::string(*rhs.ps)), i(rhs.i) {}
    HasPer& operator=(HasPtr const& rhs)
    {
        if(this != &rhs)
        {
            std::string *tem = new std:string(*rhs.ps);
            delete ps;
            
            ps = tmp;
            i = rhs.i;
        }
        return *this;
    }
private:
    std::string *ps;
    int i;
};

#endif
