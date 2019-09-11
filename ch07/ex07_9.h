#ifndef CP5_ex07_9_h
#define CP5_ex07_9_h

#include<iostream>
#include<string>

using std::string;

struct Person
{
    const string& get_name() const {return name;}
    const string& get_address() const {return address;}

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
