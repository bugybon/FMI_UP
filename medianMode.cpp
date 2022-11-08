#include <iostream>

double median(int arr[], int n){
    if(n % 2 != 0){
        return arr[n / 2];
    }else{
        return (double)(arr[n / 2] + arr[n / 2 - 1]) / 2;
    }
}

void mode(int arr[], int n){
    int max1Size = 1, max2Size = 1, counter;
    if(n == 1){
        std :: cout << arr[0];
        return;
    }
    
    int max1Num = arr[0], max2Num = arr[1];
    for(int i = 2; i < n; i++){
        counter = 0;
        for(int j = 0; j < n; j++){
            if(arr[i] == arr[j]){
                counter++;
            }
        }

        if(counter >= max1Size){
            max2Size = max1Size;
            max1Size = counter;
            max2Num = max1Num;
            max1Num = arr[i];
        }else if (counter >= max2Size){
            max2Num = arr[i];
            max2Size = counter;
        }
    }

    if(max1Size > max2Size){
        std :: cout << max1Num;
        return;
    }else{
        std :: cout << "More than one";
        return;
    }

    return;
}

int main(){
    int n, arr[255];

    std :: cin >> n;

    for(int i = 0; i < n; i++){
        std :: cin >> arr[i];
    }

    std :: cout << median(arr, n) << std :: endl;
    mode(arr, n);
}