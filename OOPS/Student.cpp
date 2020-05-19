#include <iostream>
#include <cstring>
class Student {
    int age;
    char *name;

    public :

    //Constructor

    Student(int age, char *name){
        this -> age = age;
        //Shallow copy , inbuilt copy contructor is shallow copy
        //this -> name = name;

        //Deep copy
        this -> name = new char[strlen(name) + 1];
        strcpy(this -> name, name);
    }
    void display(){
        cout << name << "" << age << endl;
    }
};