#ifndef CP5_ex07_19_h
#define CP5_ex07_19_h

#include<iostream>
#include<string>

using std::string;

struct Person;
std::istream& read(std::istream&,Person&)

struct Person
{
public:
    //构造函数
    Prerson() = default;
    Person(const string& n, const string& addr):name(n),address(addr){}
    Person(std::istream& is){ read(is,*this);}

    const string& get_name() const {return name;}
    const string& get_address() const {return address;}

private:
    string name;
    string address;
};

std::istream& read(std::istream& is,Person& item)
{
    is >> item.name >> item.address;
    return is;
}

std::ostream& print(std::ostream& os,const Person& item)
{
    os << item.name << " " << item.address;
    return os;
}

#endif
