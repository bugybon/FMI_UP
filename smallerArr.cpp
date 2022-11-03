#include <iostream> 

int main(){
    int arr1[50], arr2[50], n, counter;

    std :: cin >> n;

    for(int i = 0; i < n; i++)
        std :: cin >> arr1[i];
    
    for(int i = 0; i < n; i++){
        counter = 0;
        for(int j = n-1; j > i; j--){
            if(arr1[i] > arr1[j])
                counter++;
        }
        arr2[i] = counter;
    }

    for (int i = 0 ; i < n; i++)
        std :: cout << arr2[i] << " ";

    return 0;
}