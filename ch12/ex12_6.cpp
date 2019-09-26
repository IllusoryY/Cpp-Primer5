#include<memory>
#include<iostream>
#include<vector>

using std::vector;

vector<int>* func1()
{
    return new vector<int>();
}

vector<int>* func2(vector<int>* pv)
{
    for(int buf; std::cout << "Please enter: ", std::cin >> buf; pv->push_back(buf));
    return pv;
}

void print(vector<int>* pv)
{
    for(auto const& elem : *pv)
       std:: cout << elem << " ";
}

int main()
{
    auto p = func2(func1());
    print(p);
    delete p;

    return 0;
}
