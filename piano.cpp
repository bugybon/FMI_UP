#include <iostream>
#include <windows.h>

int main(){
    int input;

    do{
        std :: cin >> input;

        switch (input){
            case 1:
                Beep(130.81, 1000);
                break;
            case 2:
                Beep(146.83, 1000);
                break;
            case 3:
                Beep(164.81, 1000);
                break;
            case 4:
                Beep(174.61, 1000);
                break;
            case 5:
                Beep(196, 1000);
                break;
            case 6:
                Beep(220, 1000);
                break;
            case 7:
                Beep(246.94, 1000);
                break;
            default:
                break; 
        }
    }while(input != 0);

    return 0;
}