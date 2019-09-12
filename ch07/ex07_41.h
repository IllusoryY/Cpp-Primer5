#ifndef CP5_ex07_41_h
#define CP5_ex07_41_h

#include<iostream>
#include<string>

using std::string;using std::istream;using std::ostream;

struct Sales_data
{   
    friend Sales_data add(const Sales_data&,const Sales_data&);
    friend istream& read(istream&,Sales_data&);
    friend ostream& print(ostream&,const Sales_data&);
    //构造函数
    Sales_data() = default;
    Sales_data(const string& s):Sales_data(s, 0 ,0){ std:: cout << "我是一个参数的构造函数" << std::endl; }
    Sales_data(const string& s, unsigned u, double p):bookNo(s),units_sold(u),revenue(p * u){ std::cout << "我，三个参数" << std::endl; }
    Sales_data(istream& is)
    {
        read(is, *this);
        std::cout << "我是输入流构造函数" << std::endl;
    }

    string isbn() const   {return bookNo;}
    Sales_data& combine(const Sales_data& item);
private:
    inline double avg_price() const;
private: 
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

//menber function
Sales_data& Sales_data::combine(const Sales_data& item)
{
    units_sold += item.units_sold;
    revenue += item.revenue;
    return *this;
}
inline double Sales_data::avg_price() const
{
    return units_sold ? revenue / units_sold : 0;
}

//nonmember function
Sales_data add(const Sales_data& lhs, const Sales_data& rhs)
{
    Sales_data sum = lhs;
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
