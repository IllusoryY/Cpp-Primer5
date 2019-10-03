#include<iostream>

struct numbered
{
    numbered() { mysn = id++;}
    numbered(numbered const& item)  { mysn = id++; }

    int mysn;
    static int id;
};

int numbered::id = 3;

void f(numbered const& s)
{
    std::cout << s.mysn << std::endl;
}

int main()
{
    numbered a, b = a, c = b;
    f(a);//3
    f(b);//4
    f(c);//5

    return 0;
}
