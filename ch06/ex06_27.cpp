#include<iostream>

int sum(std::initializer_list<int> il){
    int result = 0;
    for(auto ibeg = il.begin(); ibeg != il.end(); ++ibeg){
        result += *ibeg;
    }

    return result;
}

int main(){
    std::cout << sum({1,2,3}) << std::endl;

    return 0;
}
