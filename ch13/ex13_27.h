#ifndef EX_13_27_H
#define EX_13_27_H

#include<string>

class HasPtr
{
public:
    HasPtr(const std::string& s = std::string()) :
        ps(new std::string(s)), i(0), use(new std::size_t(1)) {}
    HasPtr(HasPtr const& rhs) :
        ps(rhs.ps), i(rhs.i), use(rhs.use) { ++*use; }
    HasPer& operator=(HasPtr const& rhs)
    {
        ++*rhs.use;
        if(--*use == 0)
        {
            delete ps;
            delete use;
        }
            
        ps = tmp;
        i = rhs.i;
        use = rhs.use;
        return *this;
    }
    ~HasPtr()
    {
        if(--*use == 0)
        {
            delete ps;
            delete use;
        }
    }
private:
    std::string *ps;
    int i;
    std::size_t *use;
};

#endif
