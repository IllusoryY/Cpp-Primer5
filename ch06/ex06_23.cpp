#include<iostream>

using std::cout;using std::endl;using std::begin;using std::end;

void print(const int* i){
    if(i)
        cout << *i << endl;
}

void print(const char*cp){
    if(cp)
        while(*cp)
            cout << *cp++;
}

void print(const int* beg,const int* end){
    while(beg != end){
        cout << *beg++ << " ";
    }
}

void print(const int ia[],size_t size){
    for(size_t i = 0; i != size; ++i){
        cout << ia[i] << " ";
    }
}

void print(int (&arr)[2]){
    for(auto elem : arr)
        cout << elem << " ";
}

int main(){
    int i = 0;
    int j[2] = {0,1};

    print(&i);
    print("whatThefuck");
    cout << endl;
    
    print(begin(j), end(j));
    cout << endl;
    
    print(j, end(j) - begin(j));
    cout  << endl;

    print(j);
    cout << endl;
    
    return 0;
}
