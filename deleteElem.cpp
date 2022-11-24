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

void deleteElement(int *arr,int &size, int index){
    for(int i = index; i < size - 1; i++){
        int temp = *(arr + i);
        *(arr + i) = *(arr + i + 1);
        *(arr + i + 1) = temp;
    }
    if(index < size){
        size--;
    }
}

int main(){
    int arr[100], size, index;

    std :: cin >> size;

    populateArr(arr, size);

    std :: cin >> index;

    deleteElement(arr, size, index);
    printArr(arr, size);

    return 0;
}