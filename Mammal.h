#include <iostream>
#include<string>

#include "Animal.h"
using namespace std;//
// Created by yusef on 11/12/2025.
//
#include "Animal.h"
#ifndef PROG1ASSIGMENT_MAMMAL_H
#define PROG1ASSIGMENT_MAMMAL_H


class Mammal : public Animal{
private:
    string furColor;
public:
    Mammal() {
        this->furColor="";
    }
    Mammal(string name,int age,bool isHugry,string furColor): Animal( name, age, isHugry) {
        this->furColor = furColor;
    }
    ~Mammal() {

    }
};


#endif //PROG1ASSIGMENT_MAMMAL_H
