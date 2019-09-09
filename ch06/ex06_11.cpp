#include<iostream>

using std::cin;using std::cout;using std::endl;

void reset(int& val){
    val = 0;
}

int main(){
    for(int i = 0;cout << "Please enter a number:" << endl,cin >> i;){
        reset(i);
        cout << i << endl;
    }

    return 0;
}
