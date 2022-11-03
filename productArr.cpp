#include <iostream>

int main(){
    int arr[20];
    unsigned long long product = 1;
    int n;
    
    do{
        std :: cout << "Size of array:";
        std :: cin >> n;
    }while(n > 20 || n < 0);

    for(int i = 0; i < n; i++)
        std :: cin >> arr[i];

    for(int i = 0; i < n; i++)
        product *= arr[i];

    std :: cout << product;

    return 0;
}