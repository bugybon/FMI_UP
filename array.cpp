#include <iostream>

int main(){
    double arr[20];
    int n;
    
    do{
        std :: cout << "Size of array:";
        std :: cin >> n;
    }while(n > 20 || n < 0);

    for(int i = 0; i < n; i++)
        std :: cin >> arr[i];

    for (int i = 0 ; i < n; i++)
        std :: cout << arr[i] << " ";

    return 0;
}