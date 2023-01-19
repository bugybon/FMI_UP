#include <iostream>

void remove_consecutive(char string[1024]){
    for(int i = 0; string[i] != '\0'; i++){
        while(string[i] == string[i + 1]){
            i++;
        }
        std :: cout << string[i];
    }
}

int main(){
    char string[1024];

    std :: cin.getline(string, 1024);

    remove_consecutive(string);

    return 0;
}