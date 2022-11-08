#include <iostream>

void combineSorted(int arr1[], int size1, int arr2[], int size2){
    int i = 0, j = 0;
    while(i < size1 && j < size2){
        if(arr1[i] < arr2[j]){
            std :: cout << arr1[i] << " ";
            i++;
        }else{
            std :: cout << arr2[j] << " ";
            j++;
        }
    }
    if(i == size1){
        while(j < size2){
            std :: cout << arr2[j] << " ";
            j++;
        }
    }else{
        while(i < size1){
            std :: cout << arr1[i] << " ";
            i++;
        }
    }
}

int main(){
    int size1, size2, arr1[255], arr2[255];

    std :: cin >> size1;

    for(int i = 0; i < size1; i++){
        std :: cin >> arr1[i];
    }

    std :: cin >> size2;

    for(int i = 0; i < size2; i++){
        std :: cin >> arr2[i];
    }

    combineSorted(arr1, size1, arr2, size2);
}