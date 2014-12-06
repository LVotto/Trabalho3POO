#include "Potion.hh"
#include <iostream>

Potion::Potion(string name, double price, int restorepts) : Item(name, price){
    this->restorepts = restorepts;
}

Potion::Potion(){}

Potion::Potion(const Potion& p){
    this->name = p.name;
    this->price = p.price;
    this->restorepts = p.restorepts;
}

int Potion::getRestorePts(){
    return restorepts;
}

int Potion::getDefensePts(){
    return restorepts;
}

int Potion::getAttackPts(){
    return 0;
}

void equip(){
    cout << "Cannot equip potion.\n";
}
