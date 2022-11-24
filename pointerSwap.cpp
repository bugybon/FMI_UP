#include <iostream>

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a = 13;
    int b = 7;

    swap(&a, &b);
    
    std :: cout << a << " " << b;

    return 0;
}