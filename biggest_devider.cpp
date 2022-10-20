#include <iostream>

int main(){
    int a, b, biggest = 0;

    std :: cin >> a >> b;

    for(int i = 1; i < a || i < b; i++){
        if(a % i == 0 && b % i == 0) biggest = i;
    }

    std :: cout << biggest;
}