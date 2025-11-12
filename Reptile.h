//
// Created by yusef on 11/12/2025.
//#include <iostream>
#include<string>
using namespace std;//
#include "Animal.h"
#ifndef PROG1ASSIGMENT_REPTILE_H
#define PROG1ASSIGMENT_REPTILE_H


class Reptile : public Animal{
    private:
    bool isVenomous;
public:
    Reptile(){this->isVenomous=false;}

    Reptile(string name,int age,bool isHugry,bool isVenomous): Animal( name, age, isHugry) {
        this->isVenomous = isVenomous;
    }
    ~Reptile() {

    }
};


#endif //PROG1ASSIGMENT_REPTILE_H
