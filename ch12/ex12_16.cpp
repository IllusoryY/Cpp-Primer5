#include<memory>

using std::unique_ptr;

int main()
{
    //gcc version 4.8.5 
    //error: declared here
    //unique_ptr& operator=(const unique_ptr&) = delete;
    unique_ptr<int> p(new int(10));
    
    unique_ptr<int> q(new int(20));
    p = q;

    return 0;
}
