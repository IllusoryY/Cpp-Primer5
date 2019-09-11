#include"ex07_11.h"

int main()
{
    Sales_data s1;
    Sales_data s2("0-102-89757-X");
    Sales_data s3("0-123-89757-X", 3 ,10.00);
    Sales_data s4(std::cin);


    print(std::cout, s1);
    std::cout << std::endl;    

    print(std::cout, s2);
    std::cout << std::endl;    
    
    print(std::cout, s3);
    std::cout << std::endl;    
    
    print(std::cout, s4);
    std::cout << std::endl;    

    return 0;
}
