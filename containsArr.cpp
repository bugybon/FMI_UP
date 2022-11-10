#include <iostream>

bool contains(int arr[], int size, int search){
    for(int i = 0; i < size; i++){
        if(arr[i] == search){
            return true;
        }
    }

    return false;
}

int main(){
    int arr[255], n, search;

    std :: cin >> n;

    for(int i = 0; i < n; i++){
        std :: cin >> arr[i];
    }

    std :: cin >> search;

    std :: cout << std :: boolalpha << contains(arr, n, search);

}