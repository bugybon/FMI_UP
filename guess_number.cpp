#include <iostream>
#include <cstdlib>

int main(){
    int n, guess = 0, answer, counter;

    std :: cin >> n;

    answer = rand() % n + 1;

    
    do{
        std :: cin >> guess;
        counter++;
        if(guess > answer) std :: cout << "lower" << std :: endl;
        if(guess < answer) std :: cout << "higher" << std :: endl;
    } while (guess != answer);

    std :: cout << "Correct! Atempts:" << counter;

    return 0;
}