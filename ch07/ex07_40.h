#ifndef ex_07_40_h
#define ex_07_40_h

#include<std::string>
#include<iostream>

class Employee
{
public:
    Employee() = default;
    Employee(const std::string& n, const std::string& g, int age, const std::string id)
    :name_(n), gender_(g) , age_(age) , id_(id){}
    
    explicit Employee(std::istream& is)
    {
        is >> name_ >> gender_ >> age_ >> id_;
    }

private:
    std::string name_;
    std::string gender_;
    int age_ = 0;    
    std::string id_;
};


#endif
