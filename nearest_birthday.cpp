#include <iostream>

struct Student{
    char name[100];
    int day, month, year;
};

int main(){
    int size, day, month;
    Student* list;
    
    std :: cin >> size;
    list = new Student[size];
    for(int i = 0; i < size; i++){
        std :: cin >> list[i].name >> list[i].day >> list[i].month >> list[i].year;
    }
    std :: cin >> day >> month;
}