#include<iostream>
#include<string>
#include<string.h>

int main()
{
    char* concatenate_string = new char[strlen("hello " "world") + 1]();
    strcat(concatenate_string, "hello ");
    strcat(concatenate_string, "world");
    std::cout << concatenate_string << std::endl;
    delete [] concatenate_string;

    //string
    std::string s1("hello "), s2("world");
    std::cout << s1 + s2 << std::endl;

    return 0;
}
