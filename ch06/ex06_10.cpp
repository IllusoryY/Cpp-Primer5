#include<iostream>

using std::cout;using std::endl;

void swap(int* lhs,int* rhs){
    int tem = *lhs;
    *lhs = *rhs;
    *rhs = tem;
}

int main(){
    int v1 = 1,v2 = 3;

    cout << "v1: " << v1 <<"\n"
        << "v2:" << v2 <<"\n"
        << "swap v1 and v2" << endl;

    swap(&v1,&v2);

    cout << "\nv1: " << v1 <<"\n"
        << "v2: " << v2 << endl;

    return 0;
}
