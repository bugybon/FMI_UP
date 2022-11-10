#include <iostream>

int cycleCounter(int arr[], int n){
    bool used[255];
    int counter = 0, next;

    for(int i = 0; i < n; i++){
        used[i] = false;
    }

    for(int i = 0; i < n; i++){
        used[i] = true;
        next = arr[i];

        if(next > n){
            for(int j = 1; j < n; j++){
                if(!used[j]){
                    i = j - 1;
                    continue;
                }
            }
        }else if(!used[next]){
            i = next - 1;
        }else if(used[next]){
            counter++;
            for(int j = 1; j < n; j++){
                if(!used[j]){
                    i = j - 1;
                    continue;
                }
            }
        }
    }

    return counter;
}

int main(){
    int arr[255], n;

    std :: cin >> n;

    for(int i = 0; i < n; i++){
        std :: cin >> arr[i];
    }

    std :: cout << cycleCounter(arr, n);

    return 0;
}