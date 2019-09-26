#include<memory>
#include<iostream>
#include<string>

using std::allocator;using std::string;

int main()
{
    std::cout << "please enter you wanna input how many int:";
    size_t n;
    std::cin >> n;
    allocator<string> alloc;
    auto const p = alloc.allocate(n);
    
    string s;
    string* q = p;
    while(std::cin >> s && q != p + n)
    {
        alloc.construct(q++, s);
    }
    while(q != p)
    {
        std::cout << *--q << " ";
        alloc.destroy(q);
    }
    alloc.deallocate(p, n);

    return 0;
}
