#include <iostream>
#include <iomanip>

int main(){
    int n;
    double min, max, sum = 0, input;

    std:: cin >> n;

    std:: cin >> input;
    sum += input;
    max = input;
    min = input;

    for(int i = 1; i < n; i++){
        std:: cin >> input;
        sum += input;
        if(input > max) max = input;
        if(input < min) min = input;
    }

    std:: cout << min << std :: endl << max << std :: endl << std:: setprecision(2) << std :: fixed << (double)sum/n << std :: endl;

    return 0;
}