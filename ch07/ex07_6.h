#ifndef CP5_ex07_6_h
#define CP5_ex07_6_h

#include<iostream>
#include<string>

using std::string;using std::istream;using std::ostream;

struct Sales_data
{  
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
