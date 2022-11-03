#include <iostream>

bool contains(int array[], int size, int elem){
    for(int i = 0; i < size; i++){
        if(array[i] == elem)
            return true;
    }
    return false;
}

int main(){
    int arr[20], n, elem;
    

    do{
        std :: cout << "Size of array:";
        std :: cin >> n;
    }while(n > 20 || n < 0);

    for(int i = 0; i < n; i++)
        std :: cin >> arr[i];

    std :: cout << "Search for: ";
    std :: cin >> elem;

    std :: cout << contains(arr, n, elem);

    return 0;
}