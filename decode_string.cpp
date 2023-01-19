#include <iostream>

void decode(char* string){
    if(*string == '\0'){
        return;
    }else if(*string > 48 && *string <= 57){
        std :: cout << *(string + 1);
        *string = *string - 1;
        if(*string == 48){
            decode(string + 2);
        }else{
            decode(string);
        }
    }else{
        std :: cout << *string;
        decode(string + 1);
    }
}

int main(){
    char string[1024];

    std :: cin.getline(string, 1024);

    decode(string);

    return 0;
}