#include <iostream>

bool arithmeticProg(int arr[], int size){
    int progression = arr[1] - arr[0];

    for(int i = 2; i < size; i++){
        if(arr[i] - arr[i-1] != progression){
            return false;
        }
    }

    return true;
}

int main(){
    int arr[255], n;

    std :: cin >> n;

    for(int i = 0; i < n; i++){
        std :: cin >> arr[i];
    }

    std :: cout << std :: boolalpha << arithmeticProg(arr, n);

}