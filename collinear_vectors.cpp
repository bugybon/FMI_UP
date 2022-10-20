#include <iostream>

int main(){
    double a_x, a_y, b_x, b_y;

    std :: cin >> a_x >> a_y >> b_x >> b_y;

    if(a_x >= b_x){
        if(((double) a_x / b_x) * b_y == a_y)
            std :: cout << "collinear";
        else
            std:: cout << "not collinear";
    }else {
        if(((double) b_x / a_x) * a_y == b_y)
            std :: cout << "collinear";
        else
            std:: cout << "not collinear";
    }
        
    return 0;
}