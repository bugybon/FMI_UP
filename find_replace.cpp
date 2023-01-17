#include <iostream>
#include <fstream>

int main(){
    std :: ofstream file_out;
    std :: ifstream file_in;
    char name[1024], find[1024], replace[1024], text[1024];
    int current, find_length = 0, replace_length = 0;
    bool match;

    std :: cin.getline(name, 1023);
    std :: cin.getline(find, 1023);
    std :: cin.getline(replace, 1023);

    file_in.open(name);
    //file_out.open(name);

    while(replace[replace_length] != '\0'){
        replace_length++;
    }

    while(find[find_length] != '\0'){
        find_length++;
    }

    while(file_in.getline(text, 1023)){
        current = 0;
        while(text[current] != '\0' ){
            match = false;
            for(int j = 0; j < find_length - 1 && text[current + j] == find[j] /* && text[current + j - 1] != '\0' */; j++){
                if(j == find_length - 2 ){
                    match = true;
                    for(int i = 0; i < j /* && text[current + j + i - 1] != '\0' */; i++){
                        text[current + i] = text[current + j + i];
                    }
                    break;
                }
            }
            if(match){
                for(int i = 0; i < replace_length; i++){
                    text[current + replace_length + i] = text[current + i];
                    text[current + i] = replace[i];
                }
                current--;
            }
            current++;
        }
        //file_out << text << std :: endl;
        std :: cout << text << std:: endl;
    }

    file_in.close();
    //file_out.close();
    return 0;
}