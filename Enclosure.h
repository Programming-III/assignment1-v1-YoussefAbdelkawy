//
// Created by yusef on 11/12/2025.
//
#include <iostream>
using namespace std;//
// Created by yusef on 11/12/2025.
//

#include "Animal.h"
#ifndef PROG1ASSIGMENT_ENCLOSURE_H
#define PROG1ASSIGMENT_ENCLOSURE_H


class Enclosure {
    private:
    Animal* animal;
    int capacity;
    int currentCount;
    public:
    void addAnimal(Animal* a);
    void displayAnimals();
public:
    Enclosure() {
        this->animal=nullptr;
        this->capacity=10;
        this->currentCount=0;
    };

    Enclosure(Animal* animal,int capacity,int currentCount) {
        this->animal= animal;
        this->capacity = capacity;
        this->currentCount = currentCount;
    }

    ~Enclosure() {
        delete [] animal;
    }
};


#endif //PROG1ASSIGMENT_ENCLOSURE_H
