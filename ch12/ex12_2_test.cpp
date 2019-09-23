#include "ex12_2.h"
#include <iostream>

int main()
{
    const StrBlob csb{ "hello", "world", "c++" };
    StrBlob sb{ "hello", "world", "wtf" };

    std::cout << csb.front() << " " << csb.back() << std::endl;
    sb.back() = "s1mple";
    std::cout << sb.front() << " " << sb.back() << std::endl;
}
