#include<iostream>

struct numbered
{
    numbered() { mysn = id++;}
    
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
    f(a);//3
    f(b);//3
    f(c);//3

    return 0;
}
