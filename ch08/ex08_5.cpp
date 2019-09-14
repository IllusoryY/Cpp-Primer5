#include<iostream>
#include<vector>
#include<fstream>
#include<string>

void sotreFileToSvec(const std::string& filename, std::vector<std::string>& svec)
{
    std::ifstream ifs(filename);
   
    if(ifs)
    { 
        std::string buf;
        while(ifs >> buf)
        {
            svec.push_back(buf);
        }

    }
}

int main()
{
    std::vector<std::string> vec;
    sotreFileToSvec("test.txt", vec);
    for(auto &item : vec)
        std::cout << item << std::endl;
    
    return 0;
}
