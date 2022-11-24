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

void count(int* arr, int size, int find, int& occurences){
    for(int i = 0; i < size; i++){
        if(*(arr + i) == find){
            occurences++;
        }
    }
}

int main(){
    int arr[100], size, occurences = 0, find;

    std :: cin >> size;

    populateArr(arr, size);

    std :: cin >> find;

    count(arr, size, find, occurences);

    std :: cout << occurences;

    return 0;
}