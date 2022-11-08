#include <iostream>

void bubble(int arr[], int size){
    int temp;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void selection(int arr[], int size){
    int min, temp;
    for(int i = 0; i < size; i++){
        min = i;
        for(int j = i + 1; j < size; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

void insertion(int arr[], int size){
    int temp;
    for(int i = 2; i <= size; i++){
        for(int j = i - 1; j > 0; j--){
            if(arr[j] < arr[j - 1]){
                temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }
}

int main(){
    int n, arr[255];

    std :: cin >> n;

    for(int i = 0; i < n; i++){
        std :: cin >> arr[i];
    }

    insertion(arr, n);

    for(int i = 0; i < n; i++){
        std :: cout << arr[i] << " ";
    }
}