#include <iostream>

int power(int x, int power){
    int sol = 1;
    
    for(int i = 0; i < power; i++){
        sol *= x;
    }

    return sol;
}

int polinomSol(int arr[], int size, int x){
    int sol = 0;

    for(int i = 0; i < size; i++){
        sol += power(x, i) * arr[i];
    }

    return sol;
}

int main(){
    int arr[255], n, x;

    std :: cin >> n;

    for(int i = 0; i < n; i++){
        std :: cin >> arr[i];
    }

    std :: cin >> x;

    std :: cout << polinomSol(arr, n, x);

    return 0;
}