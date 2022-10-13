#include <iostream>

int main(){
    float a, b, c;

    std :: cin >> a >> b >> c;

    if(a + b <= c || a + c <= b || b + c <= a)
        std :: cout << "Not a triangle";
    else 
        std :: cout << "It is a triangle";

    return 0;
}