#include <iostream>

void replace(int array[], int size, int find, int replace){
    for(int i = 0; i < size; i++){
        if(array[i] == find)
            array[i] = replace;
    }
}

int main(){
    int arr[20], n, find, search;
    

    do{
        std :: cout << "Size of array:";
        std :: cin >> n;
    }while(n > 20 || n < 0);

    for(int i = 0; i < n; i++)
        std :: cin >> arr[i];

    std :: cout << "Search for: ";
    std :: cin >> find;
    std :: cout << "Replace with: ";
    std :: cin >> search;

    replace(arr, n, find, search);

    for (int i = 0 ; i < n; i++)
        std :: cout << arr[i] << " ";

    return 0;
}