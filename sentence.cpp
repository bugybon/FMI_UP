#include <iostream>

int main(){
    char arr[50];
    int counter = 0;
    
    std :: cin.getline(arr, 50);

    while(arr[counter] != 0)
        counter++;

    if(arr[0] >= 'A' && arr[0] <= 'Z'){
        if(arr[counter - 1] == '.')
            std :: cout << "Suobshitelno";
        else if(arr[counter - 1] == '!')
            std :: cout << "Vuzklicatelno";
        else if(arr[counter - 1] == '?')
            std :: cout << "Vuprositelno";
        else
            std :: cout << "No";
    }else
        std :: cout << "No";
 
    return 0;
}