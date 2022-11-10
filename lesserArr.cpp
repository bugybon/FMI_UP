#include <iostream>

int maxim(int arr[], int size){
    int maxim = arr[0];
    for(int i = 1; i < size; i++){
        if(maxim < arr[i]){
            maxim = arr[i];
        }
    }

    return maxim;
}

int minim(int arr[], int size){
    int minim = arr[0];
    for(int i = 1; i < size; i++){
        if(minim > arr[i]){
            minim = arr[i];
        }
    }

    return minim;
}

bool compare(int arr1[], int size1 , int arr2[], int size2){
    if(maxim(arr1, size1) <= minim(arr2, size2)){
        return true;
    }
    
    return false;
}

int main(){
    int arr1[255], n1, arr2[255], n2;

    std :: cin >> n1;

    for(int i = 0; i < n1; i++){
        std :: cin >> arr1[i];
    }

    std :: cin >> n2;

    for(int i = 0; i < n2; i++){
        std :: cin >> arr2[i];
    }

    std :: cout << std :: boolalpha << compare(arr1, n1, arr2, n2);
    return 0;
}