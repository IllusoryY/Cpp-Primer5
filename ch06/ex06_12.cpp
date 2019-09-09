#include<iostream>

using std::cout;using std::endl;using std::cin;

void swap(int& v1,int& v2){
    int tmp = v1;
    v1 = v2;
    v2 = tmp;
}

int main(){
    for(int v1,v2;cout << "Enter two number:" << endl, cin >> v1 >>v2;){
        swap(v1,v2);
        cout << "v1: " << v1
            <<"\nv2: " << v2 << endl;
    }
    
    return 0;
}
