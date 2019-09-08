#include<iostream>

using std::cout;using std::endl;using std::cin;

int fact(){
    cout << "Please enter a number" << endl;

    int val;
    cin >> val;

    if(val < 1){
        cout << "请输入大于1的值" << endl;
        return -1;
    }

    int sum = 1;
    while(val > 1){
        sum *= val--;
    }

    return sum;
}


int main(){
    int val = fact();
    cout << val << endl;

    return 0;
}
