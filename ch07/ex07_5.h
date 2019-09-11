#ifndef CP5_ex07_5_h
#define CP5_ex07_5_h

#include<string>

using std::string;

struct Person
{
public:
    const string& get_name() const {return name;}
    const string& get_address() const {return address;}
private:
    string name;
    string address;
};

#endif
