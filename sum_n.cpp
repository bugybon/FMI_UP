#include <iostream>

int main(){
    int n , input, sum = 0;

    std :: cin >> n;
    
    for (int i = 1; i <= n; i++){
        std :: cin >> input;
        sum += input;
    }

    std :: cout << sum;

    return 0;
}