#include <iostream>

int counter(char string[]){
    int counter = 0;
    while(string[counter] != '\0'){
        counter++;
    }

    return counter;
}

bool containsString(char string[], char contains[], bool beginning){
    int sizeStr = counter(string), sizeCont = counter(contains);

    if(sizeStr < sizeCont){
        return false;
    }

    if(beginning){
        for(int i = 0; i < sizeCont; i++){
            if(string[i] != contains[i]){
                return false;
            }
        }
    }else{
        for(int i = 1; i <=  sizeCont; i++){
            if(string[sizeStr - i] != contains[sizeCont - i]){
                return false;
            }
        }
    }

    return true;
}

int main(){
    char string[255], contains[255];

    std :: cin.getline(string,255);
    std :: cin.getline(contains,255);

    std :: cout << std :: boolalpha << containsString(string, contains, true) << std :: endl << std :: boolalpha << containsString(string, contains, false);

    return 0;
}