#include <iostream>

char* nextSentence(char* text){
    int i = 0;
    while(*(text + i) != '.' && *(text + i) != '!' && *(text + i) != '?'){
        i++;
    }
    return (text + i + 1);
}

int main(){
    char text[255];
    char* secondsentence;

    std :: cin.getline(text, 255);

    secondsentence = nextSentence(text);

    std :: cout << secondsentence;

    return 0;
}