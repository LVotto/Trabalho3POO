#include "Armor.hh"

Armor::Armor(string name, double price, int defensepts, double weight){
    this->name = name;
    this->price = price;
    this->defensepts = defensepts;
    this->weight = weight;
    this->equipped = false;
}

Armor::Armor(const Armor& ar){
    this->name = ar.name;
    this->price = ar.price;
    this->defensepts = ar.defensepts;
    this->weight = ar.defensepts;
    this->equipped = false;
}

bool Armor::isPotion(){
    return false;
}

int Armor::getAttackPts(){return 0;}

int Armor::getDefensePts(){return defensepts;}

int Armor::getWeight(){return weight;}

bool Armor::isEquipped(){return equipped;}

void Armor::equip(){
    this->equipped = true;
    owner->refreshSpeed(weight);
}

void Armor::unequip(){
    this->equipped = false;
    owner->loadSpeed();
}

void Armor::use(){}
