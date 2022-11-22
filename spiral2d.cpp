#include <iostream>

bool middle(int n, int m,int a, int b){
    if(n % 2 == 1 && m % 2 == 1 && a == n/2 && b == m/2){
        return true;
    }
    if(n % 2 == 0 && m % 2 == 0 && a == n/2 + 1 && b == m/2 + 1){
        return true;
    }
    return false;
}

int main(){
    int arr[100][100], n, m;
    bool reverse = false;

    std :: cin >> n >> m;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            std :: cin >> arr[i][j];
        }
    }
    int a = 0, b = 0, counterR = 0, counterC = 0;
    while(!middle(n, m, a, b)){
        while(b < m - counterC && !middle(n, m, a, b)){
            std :: cout << arr[a][b] << " ";
            b++;
        }
        b--;
        a++;
        while(a < n - counterR && !middle(n, m, a, b)){
            std :: cout << arr[a][b] << " ";
            a++;
        }
        a--;
        b--;
        while(b >= counterC && !middle(n, m, a, b)){
            std :: cout << arr[a][b] << " ";
            b--;
        }
        counterR++;
        counterC++;
        b++;
        a--;
        while(a >= counterR && !middle(n, m, a, b)){
            std :: cout << arr[a][b] << " ";
            a--;
        }
        a++;
        b++;
    }

    std :: cout << arr[a][b];

    return 0;
}