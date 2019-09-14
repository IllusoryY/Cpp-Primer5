#include"../ch07/ex07_26.h"
#include<fstream>

using std::cin;using std::cout;using std::endl;
using std::ifstream;using std::ofstream;

int main(int argc,char* argv[])
{
    ifstream ifs(argv[1]);
    if(ifs)
    {
        Sales_data total;
        ofstream ofs(argv[2]);
        if(!ofs)    return -1;

        if(read(ifs, total))
        {
            Sales_data trans;
            while(read(ifs, trans))
            {
                if(total.isbn() == trans.isbn())
                    total.combine(trans);
                else
                {
                    print(ofs, total) << endl;
                    total = trans;
                }
            }
            print(ofs, total) << endl;
            ofs.close();
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
