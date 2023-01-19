#include <iostream>

double average(double arr[], int size){
    double sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    return sum / size;
}

void add_zero(double arr[], double expected, int* size){
    while(*size < 50 && average(arr, *size) > expected){
        *size = *size + 1;
        arr[*size - 1] = 0;
    }
}

int main(){
    double arr[50], expected;
    int size;

    do{
        std :: cin >> size;
    }while(size < 0 || size > 50);

    std :: cout << "Enter array:";

    for(int i = 0; i < size; i++){
        std :: cin >> arr[i];
    }

    std :: cin >> expected;

    add_zero(arr, expected, &size);

    for(int i = 0; i < size; i++){
        std :: cout << arr[i];
        if(i + 1 != size){
            std :: cout << ", ";
        }
    }

    return 0;
}