#include<iostream>
#include<sstream>
#include<fstream>
#include<vector>

using std::ifstream;using std::istringstream;

int main()
{
    ifstream ifs("source.txt");
    if(ifs)
    {
        std::string line;
        std::vector<std::string> svec;
        while(std::getline(ifs, line))
            svec.push_back(line);
        
        std::string word;
        for(auto &item : svec)
        {
            istringstream iss(item);
            while(iss >> word)
                std::cout << word << std::endl;
        }
    }
    else
    {
        std::cerr << "No data in that file" << std::endl;
        return -1;
    }

    return 0;
}
