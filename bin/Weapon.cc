#include "Weapon.hh"

Weapon::Weapon(string name, double price, int attackpts, double range) : Item(name, price){
    this->attackpts = attackpts;
    this->range = range;
    this->equipped = false;
}

Weapon::Weapon(const Weapon& wp){
    this->name = wp.name;
    this->price = wp.price;
    this->attackpts = wp.attackpts;
    this->range = wp.range;
    this->equipped = false;
}

bool Weapon::isPotion(){
    return false;
}

int Weapon::getAttackPts(){
    return attackpts;
}

int Weapon::getDefensePts(){
    return 0;
}

double Weapon::getRange(){
    return range;
}

void Weapon::use(){}

bool Weapon::isEquipped(){
    return equipped;
}

void Weapon::equip(){
    this->equipped = true;
}

void Weapon::unequip(){
    this->equipped = false;
}

