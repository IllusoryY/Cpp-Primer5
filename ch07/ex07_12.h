#ifndef CP5_ex07_12_h
#define CP5_ex07_12_h

#include<iostream>
#include<string>

using std::string;using std::istream;using std::ostream;

struct Sales_data;
istream& read(istream& , Sales_data&);

struct Sales_data
{   //构造函数
    Sales_data() = default;
    Sales_data(const string& s):bookNo(s){}
    Sales_data(const string& s, unsigned unit, double price):bookNo(s),units_sold(unit),revenue(price * unit){}
    Sales_data(istream& is)
    {
        read(is, *this);
    }

    string isbn() const   {return bookNo;}
    Sales_data& combine(const Sales_data& rhs)
    {
        units_sold += rhs.units_sold;
        revenue += rhs.revenue;
        return *this;
    }
    
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

//nonmember function
Sales_data add(const Sales_data& lhs, const Sales_data& rhs)
{
    Sales_data sum;
    sum = lhs;
    sum.combine(rhs);
    return sum;
}

istream& read(istream& is, Sales_data& item)
{
    double price = 0;
    
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}


ostream& print(ostream& os,const Sales_data& lhs)
{
    os << lhs.isbn() << " " << lhs.units_sold << " " << lhs.revenue;
    return os;
}

#endif
