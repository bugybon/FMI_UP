#include <iostream>

bool symetry(int matrix[100][100], int size){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(matrix[i][j] != matrix[j][i]){
                return false;
            }
        }
    }

    return true;
}

int main(){
    int matrix[100][100], size;

    std :: cin >> size;

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            std :: cin >> matrix[i][j];
        }
    }

    std :: cout << std :: boolalpha << symetry(matrix, size);

    return 0;
}