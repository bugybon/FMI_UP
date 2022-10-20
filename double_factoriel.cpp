#include <iostream>

int main(){
    int n, d_factoriel = 1;

    std :: cin >> n;
    
    for (int i = n; i > 0; i -= 2){
        d_factoriel *= i;
    }

    std :: cout << d_factoriel << std :: endl;

    return 0;
}