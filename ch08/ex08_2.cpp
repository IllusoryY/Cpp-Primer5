#include<iostream>

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
    std::istream& in= funt(std::cin);
    std::cout << in.rdstate() << std::endl;
    return 0;
}
