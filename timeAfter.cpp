#include <iostream>

void calculateTime(int hour, int minute, int addMinute){
    char result[5] = {'0','0',':','0','0'};
    minute = minute + addMinute;
    hour = (hour + minute / 60) % 24;
    minute = minute % 60;
    result[1] = hour%10;
    result[4] = minute%10;
    if(hour > 10) result[0] = hour/10;
    if(minute > 10) result[3] = minute/10;
    std :: cout << result;
}

int main(){
    int hour, minute, addMinute;

    std :: cin >> hour >> minute >> addMinute;
    calculateTime(hour, minute, addMinute);
}