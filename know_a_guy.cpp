#include <iostream>

void know_a_guy(bool matrix[100][100], int size){
    for(int col = 0; col < size; col++){
        for(int row = 0; row < size; row++){
            if(!matrix[row][col] && row != col){
                break;
            }
            if(row == size - 1){
                std :: cout << col << " ";
            }
        }
    }
    std :: cout << "done";
}

int main(){
    bool matrix[100][100];
    int size;

    std :: cin >> size;

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            std :: cin >> matrix[i][j];
        }
    }

    know_a_guy(matrix, size);

    return 0;
}