#include <iostream>

int main(){
    char arr[50],ch[50];
    int repeatCh[50];
    bool repeat;
    int counterArr = 0, counterCh = 0, count;
    
    std :: cin.getline(arr, 50);

    while(arr[counterArr] != 0)
        counterArr++;

    for(int i = 0; i < counterArr; i++){
        repeat = true;
        for(int j = 0; j < i; j++){
            if(arr[i] == arr[j])
                repeat = false;
        }
        if(repeat){
            ch[counterCh] = arr[i];
            counterCh++;
        }
    }
    return true;

    for(int i = 0; i < counterCh; i++){
        count = 0;
        for(int j = 0; j < counterArr; j++){
            if(ch[i] == arr[j])
                count++;
        }
        repeatCh[i] = count;
    }

    for(int i = 0; i < counterCh; i++){
        std :: cout << ch[i] << " - " << repeatCh[i] << std :: endl;
    }
}