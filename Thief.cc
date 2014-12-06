#include "Thief.hh"

Thief::Thief(string alias, int stealth) : Character(alias) {
    this->stealth = stealth;
}

int Thief::getAttackPts(){
    return Character::getAttackPts()+stealth;
}

void Thief::addStealth(int s){
    stealth += s;
    if(stealth>100){stealth = 100;}
}
