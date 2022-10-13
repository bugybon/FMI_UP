#include <iostream>

int main(){
    char input;

    std :: cin >> input;

    if(input >= 65 && input <= 90)
        std :: cout << "Capital";
    else if(input >= 97 && input <= 122)
        std :: cout << "Lower";
    else 
        std :: cout << "Not a letter";

    return 0;
}