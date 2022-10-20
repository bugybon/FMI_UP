#include <iostream>

int main(){
    int a,b, sum_a = 0, sum_b = 0;

    std :: cin >> a >> b;
    
    while(a > 0){
        sum_a += a % 10;
        a /= 10;
    }

    while( b > 0){
        sum_b += b % 10;
        b /= 10;
    }

    if(sum_a == sum_b) std :: cout << "equal";
    else std :: cout << "not equal";

    return 0;
}