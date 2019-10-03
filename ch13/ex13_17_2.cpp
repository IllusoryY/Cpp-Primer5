#include<iostream>

struct numbered
{
    numbered() { mysn = id++;}
    numbered(numbered const& item)  { mysn = id++; }

    int mysn;
    static int id;
};

int numbered::id = 3;

void f(numbered s)
{
    std::cout << s.mysn << std::endl;
}

int main()
{
    numbered a, b = a, c = b;
    f(a);//6
    f(b);//7
    f(c);//8

    return 0;
}
