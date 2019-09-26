#include<memory>
#include<iostream>
#include<vector>

using std::vector;
using std::shared_ptr;

shared_ptr<vector<int>> func1()
{
    return std::make_shared<vector<int>>();
}

shared_ptr<vector<int>> func2(shared_ptr<vector<int>> pv)
{
    for(int buf; std::cout << "Please enter: ", std::cin >> buf; pv->push_back(buf));
    return pv;
}

void print(shared_ptr<vector<int>> pv)
{
    for(auto const& elem : *pv)
       std:: cout << elem << " ";
    std::cout << "\n";
}

int main()
{
    print(func2(func1()));

    return 0;
}
