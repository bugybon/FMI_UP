#include <iostream>

int main(){
    int arr[20],n, sum = 0;
    
    do{
        std :: cout << "Size of array:";
        std :: cin >> n;
    }while(n > 20 || n < 0);

    for(int i = 0; i < n; i++)
        std :: cin >> arr[i];

    for (int i = 0 ; i < n; i++){
        if(i % 3 == 0)
            sum += arr[i];
    }

    std :: cout << sum;

    return 0;
}