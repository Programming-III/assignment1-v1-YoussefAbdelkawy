//
// Created by yusef on 11/12/2025.
//
#include <iostream>
#include<string>
using namespace std;//
#ifndef PROG1ASSIGMENT_VISITOR_H
#define PROG1ASSIGMENT_VISITOR_H


class Visitor {
private:
    string visitorName;
    int ticketsBought;
public:
    Visitor() {
        this->visitorName = "";
        this->ticketsBought = 0;
    }
    void displayInfo();
    Visitor(string visitorName, int ticketsBought) {
        this->visitorName = visitorName;
        this->ticketsBought = ticketsBought;
    }
    ~Visitor() {}

};


#endif //PROG1ASSIGMENT_VISITOR_H
