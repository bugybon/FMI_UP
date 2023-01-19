#include <iostream>

bool isMonoGreater(int number){
    if(number / 10 == 0){
        return true;
    }else if(number % 10 < (number / 10) % 10){
        return false;
    }else{
        isMonoGreater(number / 10);
    }
}

int MonoSmallerCount(int beginning, int end){
    if(beginning > end){
        return 0;
    }else{
        return (int)isMonoGreater(beginning) + MonoSmallerCount(beginning + 1, end);
    }
}

int main(){
    int beginning, end;
    std :: cin >> beginning >> end;
    std :: cout << MonoSmallerCount(beginning, end);
    return 0;
}