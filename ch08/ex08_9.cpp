#include<iostream>
#include<sstream>

std::istream& funt(std::istream& in)
{
    std::string word;
    while(in >> word)
    {
        std::cout << word << std::endl;
    }
    in.clear();
    return in;
}

int main()
{
    std::istringstream iss("hello");
    funt(iss);
    return 0;
}
