#include <iostream>

void trim(char string[], char trimmed[]){
    int counterStr = 0, counterTrim = 0;
    while(string[counterStr] != '\0'){
        if(string[counterStr] != ' '){
            trimmed[counterTrim] = string[counterStr];
            counterTrim++;
        }
        counterStr++;
    }
    trimmed[counterTrim] = '\0';
}

int main(){
    char string[255], trimmed[255];

    std :: cin.getline(string, 255);

    trim(string, trimmed);

    std :: cout << trimmed;
    
    return 0;
}