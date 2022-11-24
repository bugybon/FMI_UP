#include <iostream>

int main(){
    int a = 0, *b = &a;

    std :: cout << *b << std :: endl;

    *b += 4;
    
    std :: cout << *b;

    return 0;
}