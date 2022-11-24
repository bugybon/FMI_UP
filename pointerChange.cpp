#include <iostream>

void change(int* a){
    if(*a % 2 == 0){
        *a = 0;
    }
}

int main(){
    int a = 11, b = 4;

    std :: cout << a << " " << b << std :: endl;

    change(&a);
    change(&b);

    std :: cout << a << " " << b << std :: endl;

    return 0;
}