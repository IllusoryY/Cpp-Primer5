#include"ex06_8.h"

int fact(int val){
    if(val < 0)
        return -1;
    
    return val > 0 ? val * fact(val -1) : 1;

}
