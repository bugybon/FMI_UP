#include <iostream>

int main(){
    int input, last_digit = 10, temp_digit;
    bool sorted = true;

    std :: cin >> input;

    while(input > 0){
        temp_digit = input % 10;
        if(temp_digit > last_digit){
            sorted = false;
            break;
        }
        last_digit = temp_digit;
        input /= 10;
    }

    if(sorted)
        std :: cout << "sorted";
    else 
        std :: cout << "not sorted";

    return 0;
}