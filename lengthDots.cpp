#include <iostream>
#include <cmath>

int lengthDots(double arr_x[], double arr_y[], int size){
    double length = 0;
    for(int i = 0; i < size - 1; i++){
        length += sqrt(pow((arr_x[i] - arr_x[i + 1]), 2) + pow((arr_y[i] - arr_y[i + 1]), 2));
    }

    return length;
}

int main(){
    double arr_x[255], arr_y[255];
    int n;

    std :: cin >> n;

    for(int i = 0; i < n; i++){
        std :: cin >> arr_x[i] >> arr_y[i];
    }

    std :: cout << lengthDots(arr_x, arr_y, n);

    return 0;
}