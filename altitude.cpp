#include <iostream>
#include <cmath>

int main(){
    int ax, ay, bx, by, cx, cy;
    double a, b, c, altitude, area, perimetre;

    std :: cin >> ax >> ay >> bx >> by >> cx >> cy;

    a = sqrt( pow( abs(cx - bx), 2) + pow( abs(cy - by), 2));
    b = sqrt( pow( abs(ax - cx), 2) + pow( abs(ay - cy), 2));
    c = sqrt( pow( abs(ax - bx), 2) + pow( abs(ay - by), 2));

    perimetre = (a + b + c) / 2;
    area = sqrt( perimetre * (perimetre - a) * (perimetre - b) * (perimetre - c));
    
    if (a >= b && a >= c)
        std :: cout << (area * 2) / a;
    else if (b >= a && b >= c)
        std :: cout << (area * 2) / b;
    else  
        std :: cout << (area * 2) / c;

    return 0;
}