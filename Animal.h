#include <iostream>
#include<string>
using namespace std;//
// Created by yusef on 11/12/2025.
//

#ifndef PROG1ASSIGMENT_ANIMAL_H
#define PROG1ASSIGMENT_ANIMAL_H


class Animal {
private:
    string name;
    int age;
    bool isHungry;
public:
    Animal();
    Animal(string name,int age,bool isHugry) {
        this->name = name;
        this->age = age;
        this->isHungry = isHugry;
    }
    void display();
    void feed();
    string getName();
    int getAge();
    void setName(string);
    void setAge(int);
    ~Animal(){}






};


#endif //PROG1ASSIGMENT_ANIMAL_H
