#include<iostream>

using std::cout;using std::endl;

int fact(int val){
    int sum = 1;

    while(val>0){
        sum *= val--;
    }

    return sum;
}


int main(){
    int val = fact(5);
    
    cout << val << endl;

    return 0;
}
