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
    vector<int> ivec(std::istream_iterator<int>(std::cin), std::istream_iterator<int>());

    sort(ivec.begin(), ivec.end());
    unique_copy(ivec.begin(), ivec.end(), std::ostream_iterator<int>(cout, "\n"));
 
    return 0;
}
