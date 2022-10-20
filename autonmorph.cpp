#include <iostream>

int main(){
    int n, sqrt;
    bool success = true;

    std :: cin >> n;
    sqrt = n*n;
    
    while(n > 0){
        if(n % 10 != sqrt % 10){
            std:: cout << "not automorph";
            success = false;
            break;
        }
        n /= 10;
        sqrt /= 10;
    }

    if(success)
        std:: cout << "automorph";

    return 0;
}