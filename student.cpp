#include <iostream>

class Student{
    private: 
        char* name;
        char* faculty_number;
        int grade;
    public: 
        char* getName();
        char* getFacultyNumber();
        int getGrade();
        void setName(char* n, int size);
        void setFacultyNumber(char* fn, int size);
        void setGrade(int g);
};

void Student::setName(char* n, int size){
    if(*(n) == '\0' || *(n + 1) == '\0' || *(n + 2) == '\0'){
        char not_aplicable[4] = {'n', '/', 'a', '\0'};
        name = new char[4];
        name = not_aplicable;
        return;
    }
    name = new char[size];
    name = n;
}

void Student::setFacultyNumber(char* fn, int size){
    faculty_number = new char[size];
    faculty_number = fn;
}

void Student::setGrade(int g){
    if(g < 8){
        grade = 0;
    }else if(g >= 10){
        grade = 10;
    }else{
        grade = 8;
    }
}

char* Student::getName(){
    return name;
}

char* Student::getFacultyNumber(){
    return faculty_number;
}

int Student::getGrade(){
    return grade;
}

int main(){
    Student student1;
    char* name = new char[10];

    std :: cin.getline(name,10);
    student1.setGrade(9);
    student1.setName(name, 10);
    std :: cout << student1.getGrade() << " " << student1.getName();

    return 0;
}