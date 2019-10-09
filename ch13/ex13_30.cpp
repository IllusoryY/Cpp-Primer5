#include"ex13_30.h"

int main()
{
    HasPtr h1("s1mple");
    HasPtr h2("electric");

    swap(h1, h2);
    h1.show();
    h2.show();
    return 0;
}
