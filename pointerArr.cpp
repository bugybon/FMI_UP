#include <iostream>

void populateArr(int* arr, int size){
    for(int i = 0; i < size; i++){
        std :: cin >> *(arr + i);
    }
}

void printArr(int* arr, int size){
    for(int i = 0; i < size; i++){
        std :: cout << *(arr + i) << " ";
    }
}

int main(){
    int arr[100], size;

    std :: cin >> size;

    populateArr(arr, size);
    printArr(arr, size);

    return 0;
}