#include<forward_list>
#include<iostream>

using std::forward_list;using std::cout;using std::endl;using std::string;

void findValToInsert(forward_list<string>& sflst,const string str1,const string str2)
{
    auto prev = sflst.before_begin();
    auto curr = sflst.begin();
    while(curr != sflst.end())
    {
        if(*curr == str1)
        {    
           sflst.insert_after(curr, str2);
           return;
        }
        prev = curr;
        ++curr;
    }
    
    //cant find str1
    sflst.insert_after(prev, str2);
    
}

int main()
{
    forward_list<string> flst = {"xiaowang", "xiaoli", "xiaozhang"};

    findValToInsert(flst, "xiaowang", "xiaoliu");
    for(auto s : flst)
        cout << s << endl;

    findValToInsert(flst, "xiaoqang", "xiaoliu");
    for(auto s : flst)
        cout << s << endl;


    return 0;
}
