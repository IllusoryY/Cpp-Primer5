#include<iostream>
#include<vector>
#include<algorithm>
#include<list>
#include<iterator>
#include<fstream>

using std::cout;using std::vector;using std::endl;using std::list;using std::string;

template<typename Sequence>
void print(Sequence const& seq)
{
    for (const auto& i : seq)
        std::cout << i << " ";
    std::cout << std::endl;
}

int main()
{
    vector<string> svec;
    std::ifstream in_file("file1.txt");
    std::istream_iterator<string> str_it(in_file), eof;

    while(str_it != eof)
        svec.push_back(*str_it++);

    print(svec);
   
    return 0;
}
