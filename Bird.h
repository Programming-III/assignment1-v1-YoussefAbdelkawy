//
// Created by yusef on 11/12/2025.
//#include <iostream>
#include<string>
using namespace std;//
#include "Animal.h"
#ifndef PROG1ASSIGMENT_BIRD_H
#define PROG1ASSIGMENT_BIRD_H


class Bird : public Animal{
private:
    float wingSpan;
public:
    Bird() {
        this->wingSpan=0.0;
    }
    Bird(string name,int age,bool isHugry,float wingSpan): Animal( name, age, isHugry) {
        this->wingSpan = wingSpan;
    }
    ~Bird() {

    }
};


#endif //PROG1ASSIGMENT_BIRD_H
