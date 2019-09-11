#include "ex07_12.h"

int main()
{
    Sales_data total(std::cin);
    if(!total.isbn().empty())
    {
        istream& is = std::cin;
        while(is)
        {
            Sales_data trans(is);
            if(!is) break;
            if(total.isbn() == trans.isbn())
                total.combine(trans);
            else
            {
                print(std::cout, total);
                std::cout << std::endl;
                total = trans;
            }
        }
        print(std::cout, total);
        std::cout << std::endl;
    }
    else
    {
        std::cerr << "No data?" << std::endl;
        return -1;
    }
    return 0;
}
