#ifndef EX_13_30_H
#define EX_13_30_H

#include<string>
#include<iostream>

class HasPtr
{
public:
    friend void swap(HasPtr& , HasPtr&);

    HasPtr(const std::string& s = std::string()) :
        ps(new std::string(s)), i(0) {}
    HasPtr(HasPtr const& rhs) :
        ps(new std::string(*rhs.ps)), i(rhs.i) {}
    HasPtr& operator=(HasPtr const& rhs)
    {
        if(this != &rhs)
        {
            std::string *tmp = new std::string(*rhs.ps);
            delete ps;
            
            ps = tmp;
            i = rhs.i;
        }
        return *this;
    }
    ~HasPtr()
    {
        delete ps;
    }
    
    void show() { std::cout << *ps << std::endl; }
private:
    std::string *ps;
    int i;
};

inline
void swap(HasPtr& lhs, HasPtr& rhs)
{
    using std::swap;
    swap(lhs.ps, rhs.ps);
    swap(lhs.i, rhs.i);
    std::cout << "wo shi swap" << std::endl;
}
#endif
