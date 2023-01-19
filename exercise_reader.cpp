#include <iostream>
#include <fstream>

int main(){
    std :: ifstream input_file;
    int counter = 0;
    char line[1024];

    input_file.open("exercise.txt");
    while(input_file.getline(line, 1023)){
        if(line[0] == '#' && line[1] == '#' && line[2] == '#'){
            counter++;
        }
    }

    std :: cout << counter;
    input_file.close();
    return 0;
}