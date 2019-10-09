#include"ex13_31.h"
#include<vector>
#include<algorithm>

int main()
{
    std::vector<HasPtr> vh;
    HasPtr h1("s1mple");
    HasPtr h2("Guadian");
    HasPtr h5("electric");

    vh.push_back(h1);
    vh.push_back(h2);
    vh.push_back(h5);
    sort(vh.begin(), vh.end());

    for(auto& i : vh)
    {
        i.show();
    }

    return 0;
}
