#include<iostream>
#include<vector>

struct X
{
    X() { std::cout << "我是默认构造函数" << std::endl; }
    X(X const&) { std::cout << "我是拷贝构造函数" << std::endl; }
    X& operator=(X const&) { std::cout << "我是拷贝赋值运算符" << std::endl; return *this; }
    ~X() { std::cout << "我是析构函数" << std::endl; }
};


void f(const X &rx, X x)
{
    std::vector<X> vec;
    vec.reserve(2);
    vec.push_back(rx);
    vec.push_back(x);
}

int main()
{
    X *px = new X;
    std::cout << "Hello" << std::endl;

    f(*px, *px);
    std::cout << "hello" << std::endl;

    delete px;

    return 0;
}
