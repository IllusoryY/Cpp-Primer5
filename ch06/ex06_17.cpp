#include<iostream>
#include<string>

using std::string;
using std::cin;using std::cout;using std::endl;

bool hasUpper(const string& str){
    for(size_t ix = 0; ix != str.size(); ++ix){
        if(isupper(str[ix]))    return true;
    }

    return false;
}

void strUpper(string& str){
    for(auto& s : str)  s = toupper(s);
}

int main(){
    for(string str;cout << "Enter a string:" << endl,  cin >> str;){
        cout << (hasUpper(str) ? "String has upper char" : "String has't upper char");

        cout << endl;
        strUpper(str);
        cout << "Upper string is: " << str << endl;
    }
        
    return 0;
}
