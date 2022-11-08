#include <iostream>

bool binarySearch(int arr[], int size, int search){
    int sizeCopy = size;
    while(sizeCopy <= size * 2  && sizeCopy > 0){
        if(search > arr[sizeCopy / 2]  && search < arr[sizeCopy / 2 + 1]){
            return false;
        }
        if(arr[sizeCopy / 2] > search){
            if(sizeCopy % 2 == 1)sizeCopy--;
            sizeCopy /= 2;
        }else if(arr[sizeCopy / 2] < search){
            if(sizeCopy % 2 == 1)sizeCopy--;
            sizeCopy += sizeCopy / 2;
        }else{
            return true;
        }
    }

    if(sizeCopy == 0  && search == arr[0]){
        return true;
    }
    return false;
}

int main(){
    int n, arr[255], search;

    std :: cin >> n;

    for(int i = 0; i < n; i++){
        std :: cin >> arr[i];
    }

    std :: cin >> search;

    std :: cout << std :: boolalpha << binarySearch(arr, n,search);
}