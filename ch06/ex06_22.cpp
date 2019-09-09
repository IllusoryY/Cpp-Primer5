#include<iostream>

using std::cout;using std::endl;

void swap(int*& pi1,int*& pi2){
    int* tmp = pi1;
    pi1 = pi2;
    pi2 = tmp;
}

int main(){
    int v1 = 1,v2 = 3;
    int* pi1 = &v1;
    int* pi2 = &v2;

    swap(pi1,pi2);
    cout << *pi1 << "   " << *pi2 << endl;
    
    return 0;
}
