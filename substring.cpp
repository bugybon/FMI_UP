#include <iostream>

void subString(char arr[], int start, int end, char copy[]){
    int counter = 0;
    for(int i = start - 1; i < end; i++){
        copy[counter] = arr[i];
        counter++;
    }
    copy[counter] = '\0';
}

int main(){
    char arr[255], copy[255];
    int start, end;

    std :: cin.getline(arr, 255);
    std :: cin >> start >> end;

    subString(arr, start, end, copy);

    std :: cout << copy;

    return 0;
}