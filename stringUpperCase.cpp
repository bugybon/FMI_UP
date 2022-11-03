#include <iostream>

int main(){
    char arr[50];
    int counter = 0;
    
    std :: cin.getline(arr, 50);

    if(arr[0] >= 'A' && arr[0] <= 'Z')
        std :: cout << arr;
    
    for(int i = 0; arr[i] != '\0'; i++)
        counter++;
    
    std :: cout << counter;

    return 0;
}