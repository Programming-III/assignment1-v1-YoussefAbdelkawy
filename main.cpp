#include <iostream>
using namespace std;
#include "Animal.h"
#include "Mammal.h"
#include "Bird.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
void Animal::display() {

    cout<<name<<" :"<<"Age: "<<age<<", "<<isHungry<<")"<<endl;

}
void Animal::feed() {
    if (isHungry) {
        cout<<"Hungry"<<endl;
    }
    else {
        cout<<"Not Hungry "<<endl;
    }
}

string Animal::getName() {
    return name;
}
int Animal::getAge() {
    return age;
}
void Animal::setName(string name ) {
    this->name = name;
}
void Animal::setAge(int age) {
    this->age = age;
}
void Enclosure::addAnimal(Animal* a) {
    if (currentCount<capacity) {
        animal[currentCount]=*a;
        currentCount++;
    }
    else {
cout<<"Too many animals"<<endl;
    }
}

void Enclosure::displayAnimals() {
    cout<<"Enclosure "<<endl;
    for (int i = 0; i < currentCount; i++) {
        animal[i].display();
    }
}
void Visitor::displayInfo() {
    cout<<"Visitor info:"<<endl;
    cout<<"Name: "<<visitorName<<endl;
    cout<<"Tickets Bought: "<<ticketsBought<<endl;
}


// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    Animal* r = new    Reptile("gecko",1000,false,false);
    Animal* b= new Bird("hawk",23,false,12.3);
    Animal* m= new Mammal("monkey",2,true,"brown");

    Enclosure* e=new Enclosure(r,10,0);
    Visitor* visitor = new Visitor("Visitor a", 1);
    visitor->displayInfo();
    e->addAnimal(m);
    e->addAnimal(b);
    e->addAnimal(r);

    e->displayAnimals();
    // TIP Press <shortcut actionId="RenameElement"/> when your caret is at the <b>lang</b> variable name to see how CLion can help you rename it.


    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}
