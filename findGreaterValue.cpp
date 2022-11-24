#include <iostream>

void findGreaterValue(int a, int b, int* big){
    if(a > b){
        *big = a;
        return;
    }
    *big = b;
}

int main(){
    int a = 13, b = 7, *big;

    findGreaterValue(a, b, big);
    
    std :: cout << *big;

    return 0;
}