#include"../ch07/ex07_26.h"
#include<fstream>

using std::cin;using std::cout;using std::endl;
using std::ifstream;

int main(int argc,char* argv[])
{
    ifstream ifs(argv[1]);
    if(ifs)
    {
        Sales_data total;

        if(read(ifs, total))
        {
            Sales_data trans;
            while(read(ifs, trans))
            {
                if(total.isbn() == trans.isbn())
                    total.combine(trans);
                else
                {
                    print(cout, total) << endl;
                    total = trans;
                }
            }
            print(cout, total) << endl;
        }
        else
        {
            std::cerr << "No data" << endl;
        }
    }
    else
    {
        std::cerr << "The file cannot find" << endl;
    }
    return 0;
}
