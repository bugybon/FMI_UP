#include <iostream>

void capitalize(char* word){
    for(int i = 0; *(word + i) != '\0'; i++){
        char &curr = *(word + i);
        if(curr >= 'a' && curr <= 'z'){
            curr += 'A' - 'a';
        }
    }
}

int main(){
    char word[100];

    std :: cin.getline(word, 100);

    capitalize(word);

    std :: cout << word;

    return 0;
}