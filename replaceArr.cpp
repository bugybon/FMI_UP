#include <iostream>

void replaceArr(int arr[], int size, int find, int replace){
    for(int i = 0; i < size; i++){
        if(arr[i] == find){
            arr[i] = replace;
        }
    }
}

int main(){
    int arr[255], n, find, replace;

    std :: cin >> n;

    for(int i = 0; i < n; i++){
        std :: cin >> arr[i];
    }

    std :: cin >> find >> replace;

    replaceArr(arr, n, find, replace);

    for(int i = 0; i < n; i++){
        std :: cout << arr[i] << " ";
    }

    return 0;
}